#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    int u = 0;
    std::cin >> u;

    std::vector<std::string> ordre;
    std::map<std::string, bool> exigeDefinition;

    for (int i = 0; i < u; ++i) {
        std::string type;
        std::string emploi;
        std::cin >> type >> emploi;

        if (exigeDefinition.count(type) == 0) {
            ordre.push_back(type);
            exigeDefinition[type] = false;
        }
        if (emploi == "VALEUR" || emploi == "BASE" ||
            emploi == "CORPS" || emploi == "TAILLE") {
            exigeDefinition[type] = true;
        }
    }

    int a = 0;
    std::cin >> a;
    std::vector<std::string> inclus(static_cast<size_t>(a));
    for (int i = 0; i < a; ++i) {
        std::cin >> inclus[static_cast<size_t>(i)];
    }

    int nbInclure = 0;
    int nbAnticiper = 0;
    for (const std::string& type : ordre) {
        if (exigeDefinition[type]) {
            std::cout << type << " INCLURE\n";
            ++nbInclure;
        } else {
            std::cout << type << " ANTICIPER\n";
            ++nbAnticiper;
        }
    }

    int retirees = 0;
    for (const std::string& type : inclus) {
        const auto it = exigeDefinition.find(type);
        if (it != exigeDefinition.end() && !it->second) {
            ++retirees;
        }
    }

    std::cout << "INCLURE " << nbInclure << '\n';
    std::cout << "ANTICIPER " << nbAnticiper << '\n';
    std::cout << "INCLUSIONS_RETIREES " << retirees << '\n';
    return 0;
}