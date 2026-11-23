#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> pile;  // ce que l'utilisateur attend
    std::vector<int> traits;        // ce que l'outil sait defaire
    int numeroTrait = 0;
    int operations = 0;
    int annulables = 0;
    int annulations = 0;
    int justes = 0;
    int riens = 0;
    int trahis = 0;

    std::string mot;
    while (std::cin >> mot) {
        if (mot == "ANNULE") {
            ++annulations;

            std::string attendu = "AUCUNE";
            if (!pile.empty()) {
                attendu = pile.back();
                pile.pop_back();
            }

            std::string obtenu = "RIEN";
            if (!traits.empty()) {
                obtenu = "TRAIT " + std::to_string(traits.back());
                traits.pop_back();
            }

            std::string verdict;
            if (obtenu == "RIEN") {
                if (attendu == "AUCUNE") {
                    verdict = "JUSTE";
                    ++justes;
                } else {
                    verdict = "RIEN";
                    ++riens;
                }
            } else if (obtenu == attendu) {
                verdict = "JUSTE";
                ++justes;
            } else {
                verdict = "TRAHI";
                ++trahis;
            }

            std::cout << "ANNULE " << annulations << " ATTENDU " << attendu
                      << " OBTENU " << obtenu << " " << verdict << "\n";
        } else if (mot == "TRAIT") {
            ++operations;
            ++annulables;
            ++numeroTrait;
            traits.push_back(numeroTrait);
            pile.push_back("TRAIT " + std::to_string(numeroTrait));
        } else if (mot == "EFFACE") {
            ++operations;
            traits.clear();
            pile.push_back("EFFACE");
        } else if (mot == "RANGE") {
            ++operations;
            pile.push_back("RANGE");
        } else {
            // DEPOSE, DEPLACE, SUPPRIME, MIROIR : suivis d'un nom d'image
            std::string nom;
            std::cin >> nom;
            ++operations;
            pile.push_back(mot + " " + nom);
        }
    }

    std::cout << "JUSTES " << justes << "\n";
    std::cout << "RIENS " << riens << "\n";
    std::cout << "TRAHIS " << trahis << "\n";
    std::cout << "ANNULABLES " << annulables << " SUR " << operations << "\n";
    return 0;
}
