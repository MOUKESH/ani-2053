#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;

    std::vector<int> planche;  // identifiants, dans l'ordre de la planche
    int prochainId = 1;        // un identifiant n'est jamais reutilise
    long long occasions = 0;
    long long repercutes = 0;
    long long recherches = 0;

    for (int k = 0; k < n; ++k) {
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "AJOUTE") {
            planche.push_back(prochainId++);
        } else if (cmd == "SUPPRIME") {
            int c;
            std::cin >> c;
            std::vector<int> idx(c);
            for (int j = 0; j < c; ++j) std::cin >> idx[j];
            std::sort(idx.begin(), idx.end());
            // du plus grand au plus petit, pour ne pas decaler les suivants
            for (int j = c - 1; j >= 0; --j) planche.erase(planche.begin() + idx[j]);
            ++occasions;
            repercutes += 2LL * c;
        } else if (cmd == "MONTE" || cmd == "DESCEND") {
            int i;
            std::cin >> i;
            int v = (cmd == "MONTE") ? i + 1 : i - 1;
            if (v < 0 || v >= static_cast<int>(planche.size())) continue;
            std::swap(planche[i], planche[v]);
            ++occasions;
            repercutes += 2;
        } else if (cmd == "DESSINE") {
            recherches += static_cast<long long>(planche.size());
        }
    }

    std::cout << "ORDRE";
    if (planche.empty()) {
        std::cout << " AUCUN";
    } else {
        for (int id : planche) std::cout << " " << id;
    }
    std::cout << "\n";
    std::cout << "OCCASIONS " << occasions << "\n";
    std::cout << "REPERCUTES " << repercutes << "\n";
    std::cout << "RECHERCHES " << recherches << "\n";
    return 0;
}