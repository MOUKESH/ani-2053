#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

// Tableaux : 0 = modele, 1 = textures, 2 = sources.
// Les deux derniers sont tenus alignes "a la main", seulement s'ils sont cites.
enum Op { AJOUTE = 0, SUPPRIME = 1, ECHANGE = 2 };

static std::string trim(std::string s) {
    while (!s.empty() && (s.back() == '\r' || s.back() == ' ')) s.pop_back();
    return s;
}

static void lireCitations(const std::string& ligne, bool cite[3][3]) {
    std::istringstream in(trim(ligne));
    std::string mot;
    in >> mot;
    int op = -1;
    if (mot == "AJOUTE") op = AJOUTE;
    else if (mot == "SUPPRIME") op = SUPPRIME;
    else if (mot == "ECHANGE") op = ECHANGE;
    if (op < 0) return;
    std::string nom;
    while (in >> nom) {
        if (nom == "textures") cite[op][1] = true;
        else if (nom == "sources") cite[op][2] = true;
    }
}

static void echange(std::vector<std::string>& t, int a, int b) {
    int n = static_cast<int>(t.size());
    if (a >= 0 && b >= 0 && a < n && b < n) std::swap(t[a], t[b]);
}

int main() {
    bool cite[3][3] = {};
    std::string ligne;
    for (int i = 0; i < 3; ++i) {
        std::getline(std::cin, ligne);
        lireCitations(ligne, cite);
    }

    std::vector<std::string> t[3];
    int n = 0;
    std::cin >> n;
    for (int k = 0; k < n; ++k) {
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "AJOUTE") {
            std::string nom;
            std::cin >> nom;
            t[0].push_back(nom);
            for (int a = 1; a < 3; ++a)
                if (cite[AJOUTE][a]) t[a].push_back(nom);
        } else if (cmd == "SUPPRIME") {
            int c;
            std::cin >> c;
            std::vector<int> idx(c);
            for (int j = 0; j < c; ++j) std::cin >> idx[j];
            std::sort(idx.begin(), idx.end());
            // du plus grand au plus petit
            for (int j = c - 1; j >= 0; --j) {
                int i = idx[j];
                if (i >= 0 && i < static_cast<int>(t[0].size()))
                    t[0].erase(t[0].begin() + i);
                for (int a = 1; a < 3; ++a) {
                    if (cite[SUPPRIME][a] && i >= 0 && i < static_cast<int>(t[a].size()))
                        t[a].erase(t[a].begin() + i);
                }
            }
        } else if (cmd == "MONTE" || cmd == "DESCEND") {
            int i;
            std::cin >> i;
            int v = (cmd == "MONTE") ? i + 1 : i - 1;
            int taille = static_cast<int>(t[0].size());
            if (v < 0 || v >= taille) continue;  // voisine absente : rien, nulle part
            echange(t[0], i, v);
            for (int a = 1; a < 3; ++a)
                if (cite[ECHANGE][a]) echange(t[a], i, v);
        }
    }

    size_t L = std::max({t[0].size(), t[1].size(), t[2].size()});
    int decales = 0;
    for (size_t i = 0; i < L; ++i) {
        bool existe[3];
        std::string nom[3];
        for (int a = 0; a < 3; ++a) {
            existe[a] = i < t[a].size();
            nom[a] = existe[a] ? t[a][i] : "-";
        }
        std::cout << i << " " << nom[0] << " " << nom[1] << " " << nom[2] << "\n";
        bool ok = existe[0] && existe[1] && existe[2] && nom[0] == nom[1] && nom[1] == nom[2];
        if (!ok) ++decales;
    }
    std::cout << "DECALES " << decales << "\n";
    return 0;
}