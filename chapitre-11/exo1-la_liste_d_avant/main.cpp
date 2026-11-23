#include <iostream>
#include <set>
#include <string>
#include <vector>

// Lit une liste annoncee par un mot et un nombre : "MOT n", puis n cles.
static std::vector<std::string> lireListe(std::string &mot)
{
    int n = 0;
    std::cin >> mot >> n;
    std::vector<std::string> cles;
    for (int i = 0; i < n; ++i) {
        std::string cle;
        std::cin >> cle;
        cles.push_back(cle);
    }
    return cles;
}

int main()
{
    std::string mot;
    std::vector<std::string> avant = lireListe(mot);
    std::vector<std::string> corrige = lireListe(mot);
    std::vector<std::string> apres = lireListe(mot);

    std::set<std::string> ensembleCorrige(corrige.begin(), corrige.end());
    std::set<std::string> ensembleApres(apres.begin(), apres.end());
    std::set<std::string> ensembleAvant(avant.begin(), avant.end());

    int vraies = 0;
    int fausses = 0;
    int oubliees = 0;

    for (size_t i = 0; i < avant.size(); ++i) {
        const char *categorie;
        if (ensembleCorrige.count(avant[i])) {
            categorie = "DEVENUE_FAUSSE";
            ++fausses;
        } else if (ensembleApres.count(avant[i])) {
            categorie = "ENCORE_VRAIE";
            ++vraies;
        } else {
            categorie = "OUBLIEE";
            ++oubliees;
        }
        std::cout << (i + 1) << " " << avant[i] << " " << categorie << "\n";
    }

    int nouvelles = 0;
    for (size_t i = 0; i < apres.size(); ++i) {
        if (!ensembleAvant.count(apres[i])) {
            ++nouvelles;
        }
    }

    int reelles = vraies + oubliees;
    int part = (reelles == 0) ? 0 : (100 * oubliees) / reelles;

    std::cout << "VRAIES " << vraies << "\n";
    std::cout << "FAUSSES " << fausses << "\n";
    std::cout << "OUBLIEES " << oubliees << "\n";
    std::cout << "NOUVELLES " << nouvelles << "\n";
    std::cout << "PART_OUBLIEE " << part << "\n";
    return 0;
}