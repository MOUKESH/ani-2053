#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace {

// Une action gardee : le tour (le n ecrit), son rang dans un tour et son texte.
struct Action {
    long long n;
    int rang;
    std::string texte;
};

enum Rang {
    RANG_PAN = 0,
    RANG_ZOOM,
    RANG_DROP,
    RANG_CLICK,
    RANG_MOVE,
    RANG_PACK,
    RANG_GRID,
    RANG_CAPTURE
};

// Coupe un texte sur un separateur, en gardant les champs vides.
std::vector<std::string> couper(const std::string &texte, char separateur)
{
    std::vector<std::string> champs;
    std::string courant;
    for (size_t i = 0; i < texte.size(); ++i) {
        if (texte[i] == separateur) {
            champs.push_back(courant);
            courant.clear();
        } else {
            courant += texte[i];
        }
    }
    champs.push_back(courant);
    return champs;
}

// Lit un entier ecrit en chiffres, avec un signe facultatif.
bool lireEntier(const std::string &texte, long long &valeur)
{
    size_t debut = 0;
    bool negatif = false;
    if (!texte.empty() && (texte[0] == '-' || texte[0] == '+')) {
        negatif = (texte[0] == '-');
        debut = 1;
    }
    if (debut >= texte.size() || texte.size() - debut > 18) {
        return false;
    }
    long long resultat = 0;
    for (size_t i = debut; i < texte.size(); ++i) {
        if (texte[i] < '0' || texte[i] > '9') {
            return false;
        }
        resultat = resultat * 10 + (texte[i] - '0');
    }
    valeur = negatif ? -resultat : resultat;
    return true;
}

// Une valeur "n:a:b..." qui doit avoir au moins `minimum` champs.
bool lireChamps(const std::string &valeur, size_t minimum,
                std::vector<std::string> &champs, long long &n)
{
    champs = couper(valeur, ':');
    if (champs.size() < minimum) {
        return false;
    }
    return lireEntier(champs[0], n);
}

}  // namespace

int main()
{
    std::vector<Action> actions;  // tout ce qui est garde, hors sortie
    long long sortie = 0;
    bool aSortie = false;
    int ignores = 0;

    std::string ligne;
    while (std::getline(std::cin, ligne)) {
        if (!ligne.empty() && ligne[ligne.size() - 1] == '\r') {
            ligne.erase(ligne.size() - 1);
        }
        size_t egal = ligne.find('=');
        if (egal == std::string::npos) {
            continue;
        }
        std::string nom = ligne.substr(0, egal);
        std::string valeur = ligne.substr(egal + 1);

        std::vector<std::string> champs;
        long long n = 0;

        if (nom == "NK_AGENT_SHOT") {
            std::vector<std::string> elements = couper(valeur, ',');
            int gardes = 0;
            for (size_t i = 0; i < elements.size(); ++i) {
                if (gardes < 8 && lireEntier(elements[i], n)) {
                    Action a = {n, RANG_CAPTURE, "CAPTURE"};
                    actions.push_back(a);
                    ++gardes;
                } else {
                    ++ignores;
                }
            }
        } else if (nom == "NK_AGENT_EXIT") {
            if (lireEntier(valeur, n)) {
                sortie = n;
                aSortie = n > 0;
            } else {
                ++ignores;
            }
        } else if (nom == "NK_AGENT_PACK") {
            if (lireEntier(valeur, n)) {
                Action a = {n, RANG_PACK, "RANGE"};
                actions.push_back(a);
            } else {
                ++ignores;
            }
        } else if (nom == "NK_AGENT_PAN" || nom == "NK_AGENT_MOVE") {
            if (lireChamps(valeur, 3, champs, n)) {
                bool pan = (nom == "NK_AGENT_PAN");
                Action a = {n, pan ? RANG_PAN : RANG_MOVE,
                            std::string(pan ? "PAN " : "MOVE ") + champs[1]
                                + " " + champs[2]};
                actions.push_back(a);
            } else {
                ++ignores;
            }
        } else if (nom == "NK_AGENT_ZOOM") {
            if (lireChamps(valeur, 4, champs, n)) {
                Action a = {n, RANG_ZOOM,
                            "ZOOM " + champs[1] + " " + champs[2] + " "
                                + champs[3]};
                actions.push_back(a);
            } else {
                ++ignores;
            }
        } else if (nom == "NK_AGENT_GRID") {
            if (lireChamps(valeur, 2, champs, n)) {
                Action a = {n, RANG_GRID, "GRILLE " + champs[1]};
                actions.push_back(a);
            } else {
                ++ignores;
            }
        } else if (nom == "NK_AGENT_CLICK") {
            std::vector<std::string> elements = couper(valeur, ';');
            int gardes = 0;
            for (size_t i = 0; i < elements.size(); ++i) {
                if (gardes < 8 && lireChamps(elements[i], 3, champs, n)) {
                    Action a = {n, RANG_CLICK,
                                "CLIC " + champs[1] + " " + champs[2]};
                    actions.push_back(a);
                    ++gardes;
                } else {
                    ++ignores;
                }
            }
        } else if (nom == "NK_AGENT_DROP") {
            std::vector<std::string> elements = couper(valeur, ';');
            int gardes = 0;
            for (size_t i = 0; i < elements.size(); ++i) {
                const std::string &element = elements[i];
                size_t p1 = element.find(':');
                size_t p2 = (p1 == std::string::npos)
                                ? std::string::npos
                                : element.find(':', p1 + 1);
                size_t p3 = (p2 == std::string::npos)
                                ? std::string::npos
                                : element.find(':', p2 + 1);
                if (gardes < 8 && p3 != std::string::npos
                    && lireEntier(element.substr(0, p1), n)) {
                    std::string px = element.substr(p1 + 1, p2 - p1 - 1);
                    std::string py = element.substr(p2 + 1, p3 - p2 - 1);
                    std::string chemin = element.substr(p3 + 1);
                    Action a = {n, RANG_DROP,
                                "DEPOT " + chemin + " " + px + " " + py};
                    actions.push_back(a);
                    ++gardes;
                } else {
                    ++ignores;
                }
            }
        }
    }

    // Une capture au numero n a lieu au tour n - 1 : le compteur est passe.
    struct Evenement {
        long long tour;
        int rang;
        std::string texte;
    };
    std::vector<Evenement> evenements;
    int jamais = 0;

    for (size_t i = 0; i < actions.size(); ++i) {
        const Action &a = actions[i];
        bool capture = (a.rang == RANG_CAPTURE);
        bool lieu = a.n > 0;
        if (lieu && aSortie) {
            lieu = capture ? (a.n <= sortie) : (a.n < sortie);
        }
        if (lieu) {
            Evenement e = {capture ? a.n - 1 : a.n, a.rang, a.texte};
            evenements.push_back(e);
        } else {
            ++jamais;
        }
    }

    std::stable_sort(evenements.begin(), evenements.end(),
                     [](const Evenement &a, const Evenement &b) {
                         if (a.tour != b.tour) {
                             return a.tour < b.tour;
                         }
                         return a.rang < b.rang;
                     });

    for (size_t i = 0; i < evenements.size(); ++i) {
        std::cout << "TOUR " << evenements[i].tour << " " << evenements[i].texte
                  << "\n";
    }

    if (aSortie) {
        std::cout << "ARRET " << (sortie - 1) << "\n";
    } else {
        std::cout << "SANS_ARRET\n";
    }
    std::cout << "JAMAIS " << jamais << "\n";
    std::cout << "IGNORES " << ignores << "\n";
    return 0;
}