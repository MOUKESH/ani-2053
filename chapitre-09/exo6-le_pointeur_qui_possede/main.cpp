#include <iostream>
#include <map>
#include <string>
#include <vector>

struct Ligne {
    std::string op;
    std::string a;
    std::string b;
};

int main() {
    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    std::vector<Ligne> lignes(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lignes[i].op >> lignes[i].a;
        if (lignes[i].op == "MOVE" || lignes[i].op == "COPY") {
            std::cin >> lignes[i].b;
        }
    }

    // Une copie ne compile pas : on refuse tout le programme.
    bool refuse = false;
    for (int i = 0; i < n; ++i) {
        if (lignes[i].op == "COPY") {
            std::cout << "REFUSE " << (i + 1) << "\n";
            refuse = true;
        }
    }
    if (refuse) {
        return 0;
    }

    std::map<std::string, int> tient;   // objet tenu par la variable, 0 = nul
    std::vector<std::string> apparition;  // ordre de premiere apparition

    auto voir = [&](const std::string &nom) {
        if (tient.find(nom) == tient.end()) {
            tient[nom] = 0;
            apparition.push_back(nom);
        }
    };

    int crees = 0;
    int detruits = 0;
    int nuls = 0;

    auto detruire = [&](int objet) {
        std::cout << "DETRUIT " << objet << "\n";
        ++detruits;
    };

    for (int i = 0; i < n; ++i) {
        const Ligne &l = lignes[i];
        int k = i + 1;
        voir(l.a);

        if (l.op == "NEW") {
            ++crees;
            int ancien = tient[l.a];
            if (ancien != 0) {
                detruire(ancien);
            }
            tient[l.a] = crees;
        } else if (l.op == "MOVE") {
            voir(l.b);
            int objet = tient[l.a];
            tient[l.a] = 0;
            if (tient[l.b] != 0) {
                detruire(tient[l.b]);
            }
            tient[l.b] = objet;
        } else if (l.op == "RESET") {
            if (tient[l.a] != 0) {
                detruire(tient[l.a]);
                tient[l.a] = 0;
            }
        } else if (l.op == "USE") {
            if (tient[l.a] == 0) {
                std::cout << "NUL " << k << " " << l.a << "\n";
                ++nuls;
            }
        }
    }

    // A la fin, les variables meurent dans l'ordre inverse de leur apparition.
    for (std::size_t i = apparition.size(); i > 0; --i) {
        int objet = tient[apparition[i - 1]];
        if (objet != 0) {
            detruire(objet);
            tient[apparition[i - 1]] = 0;
        }
    }

    std::cout << "CREES " << crees << "\n";
    std::cout << "DETRUITS " << detruits << "\n";
    std::cout << "NULS " << nuls << "\n";

    return 0;
}
