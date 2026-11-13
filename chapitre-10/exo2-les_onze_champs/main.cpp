#include <iostream>
#include <string>

int main() {
    int n = 0;
    if (!(std::cin >> n)) return 0;

    int restent = 0;
    int changes = 0;

    for (int k = 1; k <= n; ++k) {
        long long id;
        std::string x, y, echelle, rotation, opacite, miroirX, miroirY, largeur, hauteur;
        int selectionne;
        std::string chemin;
        long long octets;
        // Les treize mots sont tous lus, meme ceux qui ne changent jamais.
        std::cin >> id >> x >> y >> echelle >> rotation >> opacite >> miroirX >> miroirY >>
            largeur >> hauteur >> selectionne >> chemin >> octets;

        if (octets == 0) {
            std::cout << "ITEM " << k << " SAUTE\n";
            continue;
        }

        ++restent;
        std::string champs;
        int nb = 0;
        if (id != 0) {
            champs += " id";
            ++nb;
        }
        if (selectionne == 1) {
            champs += " selected";
            ++nb;
        }
        if (chemin != "-") {
            champs += " sourcePath";
            ++nb;
        }
        if (nb == 0) champs = " AUCUN";
        changes += nb;
        std::cout << "ITEM " << k << " " << restent << champs << "\n";
    }

    std::cout << "RESTENT " << restent << "\n";
    std::cout << "CHANGES " << changes << "\n";
    return 0;
}