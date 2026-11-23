#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace {

struct Entree {
    std::string nom;
    int valeur;
    int cout;
    std::string etiquette;
    std::string genre;
    std::string cible;
    int ordre;
    int caseRang;
    int etiquetteRang;
};

const char *NOMS_CASES[] = {"MAINTENANT", "DECOUPER", "EN_PASSANT",
                            "ON_NE_LE_FAIT_PAS"};

int rangEtiquette(const std::string &etiquette)
{
    if (etiquette == "MESUREE") {
        return 0;
    }
    if (etiquette == "OBSERVEE") {
        return 1;
    }
    return 2;
}

}  // namespace

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<Entree> entrees;
    for (int i = 0; i < n; ++i) {
        Entree e;
        std::cin >> e.nom >> e.valeur >> e.cout >> e.etiquette >> e.genre;
        if (e.genre == "SOCLE") {
            std::cin >> e.cible;
        }
        e.ordre = i;
        e.caseRang = 0;
        e.etiquetteRang = rangEtiquette(e.etiquette);
        entrees.push_back(e);
    }

    // Raison d'ecart de chaque entree, vide si elle est gardee.
    std::vector<std::string> raisons(entrees.size());
    for (size_t i = 0; i < entrees.size(); ++i) {
        if (entrees[i].genre == "REECRITURE") {
            raisons[i] = "reecriture";
        } else if (entrees[i].genre == "CHOIX") {
            raisons[i] = "choix";
        } else if (entrees[i].etiquette == "-") {
            raisons[i] = "sans_etiquette";
        }
    }

    // Les MANQUE gardes, par nom, pour retrouver la cible d'un socle.
    std::map<std::string, int> manquesGardes;
    for (size_t i = 0; i < entrees.size(); ++i) {
        if (raisons[i].empty() && entrees[i].genre == "MANQUE") {
            manquesGardes[entrees[i].nom] = entrees[i].valeur;
        }
    }

    std::vector<Entree> gardees;
    for (size_t i = 0; i < entrees.size(); ++i) {
        if (!raisons[i].empty()) {
            continue;
        }
        Entree e = entrees[i];
        if (e.genre == "SOCLE") {
            std::map<std::string, int>::const_iterator it =
                manquesGardes.find(e.cible);
            if (it != manquesGardes.end()) {
                e.valeur = std::max(e.valeur, it->second);
            }
        }
        bool forte = e.valeur >= 3;
        bool elevee = e.cout >= 3;
        if (forte) {
            e.caseRang = elevee ? 1 : 0;
        } else {
            e.caseRang = elevee ? 3 : 2;
        }
        gardees.push_back(e);
    }

    std::stable_sort(gardees.begin(), gardees.end(),
                     [](const Entree &a, const Entree &b) {
                         if (a.caseRang != b.caseRang) {
                             return a.caseRang < b.caseRang;
                         }
                         if (a.etiquetteRang != b.etiquetteRang) {
                             return a.etiquetteRang < b.etiquetteRang;
                         }
                         if (a.valeur != b.valeur) {
                             return a.valeur > b.valeur;
                         }
                         if (a.cout != b.cout) {
                             return a.cout < b.cout;
                         }
                         return a.ordre < b.ordre;
                     });

    bool refuse = false;
    for (size_t i = 0; i < gardees.size(); ++i) {
        std::cout << NOMS_CASES[gardees[i].caseRang] << " " << gardees[i].nom
                  << " " << gardees[i].etiquette << "\n";
        if (gardees[i].caseRang == 3) {
            refuse = true;
        }
    }

    for (size_t i = 0; i < entrees.size(); ++i) {
        if (!raisons[i].empty()) {
            std::cout << "HORS_LISTE " << entrees[i].nom << " " << raisons[i]
                      << "\n";
        }
    }

    std::cout << "VERDICT " << (refuse ? "HONNETE" : "COMPLAISANT") << "\n";
    return 0;
}