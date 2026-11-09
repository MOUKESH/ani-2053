#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace {

bool seTermine(const std::string& nom, const std::string& suffixe)
{
    return nom.size() >= suffixe.size() &&
           nom.compare(nom.size() - suffixe.size(), suffixe.size(), suffixe) == 0;
}

int compter(const std::string& depart,
            const std::map<std::string, std::vector<std::string>>& inclusPar)
{
    std::map<std::string, bool> vu;
    std::vector<std::string> pile;
    pile.push_back(depart);
    vu[depart] = true;
    int total = 0;

    while (!pile.empty()) {
        const std::string courant = pile.back();
        pile.pop_back();
        if (seTermine(courant, ".cpp")) {
            ++total;
        }
        const auto it = inclusPar.find(courant);
        if (it == inclusPar.end()) {
            continue;
        }
        for (const std::string& parent : it->second) {
            if (!vu[parent]) {
                vu[parent] = true;
                pile.push_back(parent);
            }
        }
    }
    return total;
}

} // namespace

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<std::string> ordre;
    std::map<std::string, bool> existe;
    std::vector<std::pair<std::string, std::vector<std::string>>> lignes;

    for (int i = 0; i < n; ++i) {
        std::string nom;
        int k = 0;
        std::cin >> nom >> k;
        std::vector<std::string> incs(static_cast<size_t>(k));
        for (int j = 0; j < k; ++j) {
            std::cin >> incs[static_cast<size_t>(j)];
        }
        ordre.push_back(nom);
        existe[nom] = true;
        lignes.emplace_back(nom, incs);
    }

    // inclusPar[f] = fichiers de la liste qui incluent directement f
    std::map<std::string, std::vector<std::string>> inclusPar;
    for (const auto& ligne : lignes) {
        for (const std::string& inc : ligne.second) {
            if (existe.count(inc) != 0) {
                inclusPar[inc].push_back(ligne.first);
            }
        }
    }

    int q = 0;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::string nom;
        std::cin >> nom;
        std::cout << nom << ' ' << compter(nom, inclusPar) << '\n';
    }

    std::string meilleur;
    int meilleurScore = -1;
    for (const std::string& nom : ordre) {
        if (!seTermine(nom, ".h")) {
            continue;
        }
        const int score = compter(nom, inclusPar);
        if (score > meilleurScore) { // strict : le premier gagne en cas d'égalité
            meilleurScore = score;
            meilleur = nom;
        }
    }

    if (meilleurScore < 0) {
        std::cout << "PLUS_LOURD AUCUN\n";
    } else {
        std::cout << "PLUS_LOURD " << meilleur << ' ' << meilleurScore << '\n';
    }
    return 0;
}