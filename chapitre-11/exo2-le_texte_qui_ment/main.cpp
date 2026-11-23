#include <iostream>
#include <set>
#include <string>
#include <vector>

int main()
{
    int nbCommits = 0;
    std::cin >> nbCommits;

    std::vector<std::string> hashes;
    std::vector<std::set<std::string> > etats;
    std::set<std::string> courant;

    for (int i = 0; i < nbCommits; ++i) {
        std::string hash;
        std::string action;
        int k = 0;
        std::cin >> hash >> action >> k;
        for (int j = 0; j < k; ++j) {
            std::string fonction;
            std::cin >> fonction;
            if (action == "AJOUTE") {
                courant.insert(fonction);
            } else {
                courant.erase(fonction);
            }
        }
        hashes.push_back(hash);
        etats.push_back(courant);
    }

    int nbAnnonces = 0;
    std::cin >> nbAnnonces;

    int mensonges = 0;
    for (int a = 1; a <= nbAnnonces; ++a) {
        std::string hash;
        std::string etat;
        std::string fonction;
        std::cin >> hash >> etat >> fonction;

        int ecrite = 0;
        for (int i = 0; i < nbCommits; ++i) {
            if (hashes[i] == hash) {
                ecrite = i;
            }
        }

        bool disponible = (etat == "DISPONIBLE");
        int dernier = nbCommits - 1;
        bool vraieAuDernier = (etats[dernier].count(fonction) > 0) == disponible;

        if (vraieAuDernier) {
            std::cout << "ANNONCE " << a << " VRAI\n";
            continue;
        }

        int depuis = dernier;
        while (depuis > ecrite
               && (etats[depuis - 1].count(fonction) > 0) != disponible) {
            --depuis;
        }
        ++mensonges;
        std::cout << "ANNONCE " << a << " MENT " << hashes[depuis] << "\n";
    }

    std::cout << "MENSONGES " << mensonges << "\n";
    return 0;
}