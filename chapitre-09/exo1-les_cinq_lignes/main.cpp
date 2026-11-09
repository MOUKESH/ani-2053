#include <iostream>
#include <string>

namespace {

const int DESTRUCTEUR = 0;
const int COPIE = 1;
const int AFFECTATION_COPIE = 2;
const int DEPLACEMENT = 3;
const int AFFECTATION_DEPLACEMENT = 4;

std::string retirerEspaces(const std::string &s) {
    std::string r;
    for (char c : s) {
        if (c != ' ' && c != '\t' && c != '\r' && c != '\n') {
            r += c;
        }
    }
    return r;
}

bool commencePar(const std::string &s, const std::string &prefixe) {
    return s.compare(0, prefixe.size(), prefixe) == 0;
}

bool finitPar(const std::string &s, const std::string &suffixe) {
    return s.size() >= suffixe.size() &&
           s.compare(s.size() - suffixe.size(), suffixe.size(), suffixe) == 0;
}

// Vrai si s commence par prefixe, sans un second '&' juste apres.
bool commenceSansSecondEt(const std::string &s, const std::string &prefixe) {
    if (!commencePar(s, prefixe)) {
        return false;
    }
    return s.size() == prefixe.size() || s[prefixe.size()] != '&';
}

}  // namespace

int main() {
    std::string classe;
    std::getline(std::cin, classe);
    classe = retirerEspaces(classe);

    const std::string noms[5] = {"DESTRUCTEUR", "COPIE", "AFFECTATION_COPIE",
                                 "DEPLACEMENT", "AFFECTATION_DEPLACEMENT"};
    std::string etat[5] = {"ABSENT", "ABSENT", "ABSENT", "ABSENT", "ABSENT"};

    const std::string pDestructeur = "~" + classe + "(";
    const std::string pCopie = classe + "(const" + classe + "&";
    const std::string pAffCopie = classe + "&operator=(const" + classe + "&";
    const std::string pDeplacement = classe + "(" + classe + "&&";
    const std::string pAffDeplacement = classe + "&operator=(" + classe + "&&";

    std::string ligne;
    while (std::getline(std::cin, ligne)) {
        std::size_t pos = ligne.find("//");
        if (pos != std::string::npos) {
            ligne = ligne.substr(0, pos);
        }
        std::string s = retirerEspaces(ligne);
        if (s.empty()) {
            continue;
        }

        int membre = -1;
        if (s.find(pDestructeur) != std::string::npos) {
            membre = DESTRUCTEUR;
        } else if (commenceSansSecondEt(s, pCopie)) {
            membre = COPIE;
        } else if (commenceSansSecondEt(s, pAffCopie)) {
            membre = AFFECTATION_COPIE;
        } else if (commencePar(s, pDeplacement)) {
            membre = DEPLACEMENT;
        } else if (commencePar(s, pAffDeplacement)) {
            membre = AFFECTATION_DEPLACEMENT;
        }

        if (membre < 0) {
            continue;
        }

        if (finitPar(s, "=delete;")) {
            etat[membre] = "SUPPRIME";
        } else if (finitPar(s, "=default;")) {
            etat[membre] = "DEFAUT";
        } else {
            etat[membre] = "ECRIT";
        }
    }

    bool declare[5];
    int nombreDeclares = 0;
    for (int i = 0; i < 5; ++i) {
        declare[i] = (etat[i] != "ABSENT");
        if (declare[i]) {
            ++nombreDeclares;
        }
        std::cout << noms[i] << " " << etat[i] << "\n";
    }

    bool unDeplacement = declare[DEPLACEMENT] || declare[AFFECTATION_DEPLACEMENT];

    if (nombreDeclares == 0) {
        std::cout << "REGLE ZERO\n";
    } else if (nombreDeclares == 5) {
        std::cout << "REGLE CINQ\n";
    } else if (declare[DESTRUCTEUR] && declare[COPIE] &&
               declare[AFFECTATION_COPIE] && !unDeplacement) {
        std::cout << "REGLE TROIS\n";
    } else {
        std::cout << "REGLE INCOMPLETE\n";
        int limite = unDeplacement ? 5 : 3;
        for (int i = 0; i < limite; ++i) {
            if (!declare[i]) {
                std::cout << "MANQUE " << noms[i] << "\n";
            }
        }
    }

    bool possede = (etat[DESTRUCTEUR] == "ECRIT");
    bool unique = (etat[COPIE] == "SUPPRIME") &&
                  (etat[DEPLACEMENT] == "ECRIT" || etat[DEPLACEMENT] == "DEFAUT");

    std::cout << "POSSEDE " << (possede ? "OUI" : "NON") << "\n";
    std::cout << "UNIQUE " << (unique ? "OUI" : "NON") << "\n";

    return 0;
}