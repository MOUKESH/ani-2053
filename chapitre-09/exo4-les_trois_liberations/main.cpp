#include <iostream>
#include <string>
#include <vector>

int main() {
    int S = 0, V = 0, F = 0;
    std::cin >> S >> V >> F;

    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    std::vector<int> tableau;      // numeros des textures encore dans le tableau
    std::vector<bool> liberee(1, false);  // liberee[t] : la texture t a ete liberee
    int creees = 0;

    // Libere "fois" fois la texture t. Renvoie faux si elle meurt.
    auto liberer = [&](int t, int fois) {
        for (int j = 0; j < fois; ++j) {
            if (liberee[t]) {
                return false;
            }
            liberee[t] = true;
        }
        return true;
    };

    for (int k = 1; k <= n; ++k) {
        std::string op;
        std::cin >> op;

        if (op == "AJOUTE") {
            ++creees;
            liberee.push_back(false);
            tableau.push_back(creees);
        } else if (op == "SUPPRIME") {
            int i = 0;
            std::cin >> i;
            if (i >= 0 && i < static_cast<int>(tableau.size())) {
                int t = tableau[i];
                if (!liberer(t, S)) {
                    std::cout << "PLANTAGE " << k << " TEXTURE " << t << "\n";
                    return 0;
                }
                tableau.erase(tableau.begin() + i);
            }
        } else if (op == "VIDE") {
            for (std::size_t p = 0; p < tableau.size(); ++p) {
                int t = tableau[p];
                if (!liberer(t, V)) {
                    std::cout << "PLANTAGE " << k << " TEXTURE " << t << "\n";
                    return 0;
                }
            }
            tableau.clear();
        }
    }

    for (std::size_t p = 0; p < tableau.size(); ++p) {
        int t = tableau[p];
        if (!liberer(t, F)) {
            std::cout << "PLANTAGE FIN TEXTURE " << t << "\n";
            return 0;
        }
    }

    std::vector<int> perdues;
    for (int t = 1; t <= creees; ++t) {
        if (!liberee[t]) {
            perdues.push_back(t);
        }
    }

    std::cout << "CREEES " << creees << "\n";
    std::cout << "FUITES " << perdues.size() << "\n";
    std::cout << "PERDUES";
    if (perdues.empty()) {
        std::cout << " AUCUN";
    } else {
        for (int t : perdues) {
            std::cout << " " << t;
        }
    }
    std::cout << "\n";

    return 0;
}
