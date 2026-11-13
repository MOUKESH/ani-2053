#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

// Lecteur d'octets : chaque lecture verifie qu'il reste assez d'octets.
struct Lecteur {
    const std::vector<uint8_t>& oct;
    size_t pos = 0;
    bool ok = true;

    explicit Lecteur(const std::vector<uint8_t>& o) : oct(o) {}

    bool disponible(uint64_t n) {
        if (!ok || n > oct.size() - pos) {
            ok = false;
            return false;
        }
        return true;
    }

    uint8_t u8() {
        if (!disponible(1)) return 0;
        return oct[pos++];
    }

    uint32_t u32() {
        if (!disponible(4)) return 0;
        uint32_t v = static_cast<uint32_t>(oct[pos]) |
                     (static_cast<uint32_t>(oct[pos + 1]) << 8) |
                     (static_cast<uint32_t>(oct[pos + 2]) << 16) |
                     (static_cast<uint32_t>(oct[pos + 3]) << 24);
        pos += 4;
        return v;
    }

    float f32() {
        uint32_t bits = u32();
        float f;
        std::memcpy(&f, &bits, sizeof f);
        return f;
    }

    void saute(uint64_t n) {
        if (!disponible(n)) return;
        pos += static_cast<size_t>(n);
    }
};

static std::string nombre(double v) {
    char buf[64];
    std::snprintf(buf, sizeof buf, "%.2f", v);
    std::string s = buf;
    if (s == "-0.00") s = "0.00";
    return s;
}

int main() {
    size_t t = 0;
    std::cin >> t;
    std::vector<uint8_t> oct;
    std::string mot;
    while (oct.size() < t && std::cin >> mot) {
        oct.push_back(static_cast<uint8_t>(std::stoul(mot, nullptr, 16)));
    }

    Lecteur r(oct);
    std::string sortie;

    uint8_t magic[4];
    for (int i = 0; i < 4; ++i) magic[i] = r.u8();
    if (!r.ok) {
        std::cout << "TRONQUE\n";
        return 0;
    }
    if (magic[0] != 'N' || magic[1] != 'K' || magic[2] != 'R' || magic[3] != 'F') {
        std::cout << "PAS_UNE_PLANCHE\n";
        return 0;
    }

    uint32_t version = r.u32();
    if (!r.ok) {
        std::cout << "TRONQUE\n";
        return 0;
    }
    if (version != 1) {
        std::cout << "VERSION_INCONNUE " << version << "\n";
        return 0;
    }

    double cx = r.f32();
    double cy = r.f32();
    double zoom = r.f32();
    uint8_t theme = r.u8();
    uint8_t grille = r.u8();
    r.u8();
    r.u8();
    sortie += "VUE " + nombre(cx) + " " + nombre(cy) + " " + nombre(zoom) + "\n";
    sortie += theme != 0 ? "THEME SOMBRE\n" : "THEME CLAIR\n";
    sortie += grille == 0 ? "GRILLE AFFICHEE\n" : "GRILLE CACHEE\n";

    uint32_t nbImages = r.u32();
    sortie += "IMAGES " + std::to_string(nbImages) + "\n";
    for (uint32_t k = 1; k <= nbImages && r.ok; ++k) {
        double x = r.f32();
        double y = r.f32();
        double echelle = r.f32();
        double rotation = r.f32();
        double opacite = r.f32();
        uint8_t mx = r.u8();
        uint8_t my = r.u8();
        r.u8();
        r.u8();
        uint32_t largeur = r.u32();
        uint32_t hauteur = r.u32();
        uint32_t taille = r.u32();
        r.saute(taille);
        sortie += "IMAGE " + std::to_string(k) + " " + nombre(x) + " " + nombre(y) + " " +
                  nombre(echelle) + " " + nombre(rotation) + " " + nombre(opacite) + " " +
                  (mx != 0 ? "1" : "0") + " " + (my != 0 ? "1" : "0") + " " +
                  std::to_string(largeur) + " " + std::to_string(hauteur) + " " +
                  std::to_string(taille) + "\n";
    }

    uint32_t nbTraits = r.ok ? r.u32() : 0;
    if (r.ok) sortie += "TRAITS " + std::to_string(nbTraits) + "\n";
    for (uint32_t k = 1; k <= nbTraits && r.ok; ++k) {
        uint8_t rr = r.u8();
        uint8_t g = r.u8();
        uint8_t b = r.u8();
        uint8_t a = r.u8();
        double epaisseur = r.f32();
        uint32_t p = r.u32();
        sortie += "TRAIT " + std::to_string(k) + " " + std::to_string(rr) + " " +
                  std::to_string(g) + " " + std::to_string(b) + " " + std::to_string(a) +
                  " " + nombre(epaisseur) + " " + std::to_string(p) + "\n";
        for (uint32_t j = 0; j < p && r.ok; ++j) {
            double px = r.f32();
            double py = r.f32();
            if (r.ok) sortie += "POINT " + nombre(px) + " " + nombre(py) + "\n";
        }
    }

    if (!r.ok) {
        std::cout << "TRONQUE\n";
        return 0;
    }
    std::cout << sortie;
    return 0;
}