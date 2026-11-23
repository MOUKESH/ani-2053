#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

namespace {

const long long FIN_SEANCE = 20 * 60;  // 20:00, en secondes

struct Contournement {
    std::string nom;
    int fois;
    long long premier;  // plus petit instant observe pendant la seance
    int ordre;          // rang de sa premiere ligne dans l'entree
    bool dit;
};

// Convertit "mm:ss" en secondes.
long long enSecondes(const std::string &instant)
{
    size_t deuxPoints = instant.find(':');
    long long minutes = std::stoll(instant.substr(0, deuxPoints));
    long long secondes = std::stoll(instant.substr(deuxPoints + 1));
    return minutes * 60 + secondes;
}

}  // namespace

int main()
{
    std::string mot;
    int n = 0;
    std::cin >> mot >> n;

    std::vector<Contournement> liste;
    int horsSeance = 0;

    for (int i = 0; i < n; ++i) {
        std::string instant;
        std::string nom;
        std::cin >> instant >> nom;
        long long secondes = enSecondes(instant);
        if (secondes > FIN_SEANCE) {
            ++horsSeance;
            continue;
        }
        bool trouve = false;
        for (size_t j = 0; j < liste.size(); ++j) {
            if (liste[j].nom == nom) {
                ++liste[j].fois;
                liste[j].premier = std::min(liste[j].premier, secondes);
                trouve = true;
                break;
            }
        }
        if (!trouve) {
            Contournement c = {nom, 1, secondes, i, false};
            liste.push_back(c);
        }
    }

    int m = 0;
    std::cin >> mot >> m;
    std::vector<std::string> cites;
    std::set<std::string> ensembleCites;
    for (int i = 0; i < m; ++i) {
        std::string nom;
        std::cin >> nom;
        cites.push_back(nom);
        ensembleCites.insert(nom);
    }

    std::set<std::string> vus;
    for (size_t i = 0; i < liste.size(); ++i) {
        liste[i].dit = ensembleCites.count(liste[i].nom) > 0;
        vus.insert(liste[i].nom);
    }

    std::stable_sort(liste.begin(), liste.end(),
                     [](const Contournement &a, const Contournement &b) {
                         if (a.fois != b.fois) {
                             return a.fois > b.fois;
                         }
                         if (a.premier != b.premier) {
                             return a.premier < b.premier;
                         }
                         return a.ordre < b.ordre;
                     });

    int nonDits = 0;
    long long foisNonDits = 0;
    long long foisTotal = 0;
    for (size_t i = 0; i < liste.size(); ++i) {
        std::cout << liste[i].nom << " " << liste[i].fois << " "
                  << (liste[i].dit ? "DIT" : "NON_DIT") << "\n";
        foisTotal += liste[i].fois;
        if (!liste[i].dit) {
            ++nonDits;
            foisNonDits += liste[i].fois;
        }
    }

    long long part = (foisTotal == 0) ? 0 : (100 * foisNonDits) / foisTotal;

    std::cout << "NON_DITS " << nonDits << "\n";
    std::cout << "PART_NON_DITE " << part << "\n";

    std::string sansVu;
    for (size_t i = 0; i < cites.size(); ++i) {
        if (!vus.count(cites[i])) {
            sansVu += " " + cites[i];
        }
    }
    if (sansVu.empty()) {
        sansVu = " AUCUN";
    }
    std::cout << "DIT_SANS_VU" << sansVu << "\n";
    std::cout << "HORS_SEANCE " << horsSeance << "\n";
    return 0;
}