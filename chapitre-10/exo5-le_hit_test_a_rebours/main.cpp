#include <cmath>
#include <iostream>
#include <string>
#include <vector>

struct Image {
    std::string nom;
    double x;
    double y;
    double demiLargeur;
    double demiHauteur;
};

static bool touche(const Image& img, double px, double py) {
    return std::fabs(px - img.x) <= img.demiLargeur &&
           std::fabs(py - img.y) <= img.demiHauteur;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<Image> planche;
    for (int i = 0; i < n; ++i) {
        std::string nom;
        double x, y, largeur, hauteur, echelle;
        std::cin >> nom >> x >> y >> largeur >> hauteur >> echelle;
        planche.push_back({nom, x, y, largeur * echelle / 2, hauteur * echelle / 2});
    }

    int q;
    std::cin >> q;
    int erreurs = 0;
    for (int k = 1; k <= q; ++k) {
        double px, py;
        std::cin >> px >> py;

        std::string a = "AUCUN";
        for (int i = n - 1; i >= 0; --i) {
            if (touche(planche[i], px, py)) {
                a = planche[i].nom;
                break;
            }
        }

        std::string b = "AUCUN";
        for (int i = 0; i < n; ++i) {
            if (touche(planche[i], px, py)) {
                b = planche[i].nom;
                break;
            }
        }

        if (a != b) ++erreurs;
        std::cout << "CLIC " << k << " " << a << " " << b << "\n";
    }
    std::cout << "ERREURS " << erreurs << "\n";
    return 0;
}