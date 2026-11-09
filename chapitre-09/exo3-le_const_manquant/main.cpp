#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace {

void afficher(const std::string &titre, const std::vector<std::string> &noms) {
    std::cout << titre;
    if (noms.empty()) {
        std::cout << " AUCUN";
    } else {
        for (const std::string &nom : noms) {
            std::cout << " " << nom;
        }
    }
    std::cout << "\n";
}

}  // namespace

int main() {
    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    std::vector<std::string> noms(n);
    std::vector<bool> estConst(n, false);
    std::vector<bool> modifie(n, false);
    std::vector<std::vector<std::string>> appels(n);
    std::map<std::string, int> index;

    for (int i = 0; i < n; ++i) {
        std::string declaree;
        int m = 0;
        int k = 0;
        std::cin >> noms[i] >> declaree >> m >> k;
        estConst[i] = (declaree == "const");
        modifie[i] = (m == 1);
        appels[i].resize(k);
        for (int j = 0; j < k; ++j) {
            std::cin >> appels[i][j];
        }
        index[noms[i]] = i;
    }

    // Pour chaque methode : numero de la passe qui la declare const (0 = jamais).
    std::vector<int> passeDe(n, 0);
    int passes = 0;

    while (true) {
        std::vector<int> cette;
        for (int i = 0; i < n; ++i) {
            if (estConst[i] || modifie[i]) {
                continue;
            }
            bool tout = true;
            for (const std::string &appele : appels[i]) {
                auto it = index.find(appele);
                if (it == index.end() || !estConst[it->second]) {
                    tout = false;
                    break;
                }
            }
            if (tout) {
                cette.push_back(i);
            }
        }
        if (cette.empty()) {
            break;
        }
        ++passes;
        for (int i : cette) {
            estConst[i] = true;
            passeDe[i] = passes;
        }
    }

    std::vector<std::string> pourrait;
    std::vector<std::string> racines;
    for (int i = 0; i < n; ++i) {
        if (passeDe[i] > 0) {
            pourrait.push_back(noms[i]);
            if (passeDe[i] == 1) {
                racines.push_back(noms[i]);
            }
        }
    }

    afficher("POURRAIT", pourrait);
    afficher("RACINES", racines);
    std::cout << "PASSES " << passes << "\n";

    return 0;
}