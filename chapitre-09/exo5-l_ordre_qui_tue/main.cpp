#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::vector<std::vector<std::string>> blocs;
    blocs.push_back(std::vector<std::string>());  // le bloc de la fonction

    std::set<std::string> liberes;
    std::vector<std::pair<std::string, std::string>> dependances;

    // Libere a. Renvoie faux (apres avoir affiche PLANTAGE) si un objet
    // dont a a besoin est deja libere.
    auto liberer = [&](const std::string &a, const std::string &mot) {
        for (const auto &d : dependances) {
            if (d.first == a && liberes.count(d.second) > 0) {
                std::cout << "PLANTAGE " << a << " " << d.second << "\n";
                return false;
            }
        }
        liberes.insert(a);
        std::cout << mot << " " << a << "\n";
        return true;
    };

    // Detruit un bloc, du dernier declare au premier.
    auto detruireBloc = [&](const std::vector<std::string> &bloc) {
        for (std::size_t i = bloc.size(); i > 0; --i) {
            const std::string &x = bloc[i - 1];
            if (liberes.count(x) > 0) {
                continue;
            }
            if (!liberer(x, "DETRUIT")) {
                return false;
            }
        }
        return true;
    };

    std::string ligne;
    while (std::getline(std::cin, ligne)) {
        std::istringstream flux(ligne);
        std::string mot;
        if (!(flux >> mot)) {
            continue;
        }

        if (mot == "DECL") {
            std::string x;
            flux >> x;
            blocs.back().push_back(x);
        } else if (mot == "DEPEND") {
            std::string a, b;
            flux >> a >> b;
            dependances.push_back(std::make_pair(a, b));
        } else if (mot == "FERME") {
            std::string x;
            flux >> x;
            if (liberes.count(x) == 0) {
                if (!liberer(x, "FERME")) {
                    return 0;
                }
            }
        } else if (mot == "{") {
            blocs.push_back(std::vector<std::string>());
        } else if (mot == "}") {
            if (blocs.size() > 1) {
                std::vector<std::string> bloc = blocs.back();
                blocs.pop_back();
                if (!detruireBloc(bloc)) {
                    return 0;
                }
            }
        }
    }

    // La fin de l'entree ferme le bloc de la fonction (et ceux restes ouverts).
    while (!blocs.empty()) {
        std::vector<std::string> bloc = blocs.back();
        blocs.pop_back();
        if (!detruireBloc(bloc)) {
            return 0;
        }
    }

    std::cout << "PROPRE\n";

    return 0;
}
