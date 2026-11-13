#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

// Trois conceptions de la selection, chacune avec sa propre planche.

static bool existe(int i, size_t taille) {
    return i >= 0 && static_cast<size_t>(i) < taille;
}

// DANS_ITEM : chaque image porte un drapeau qui la suit partout.
struct DansItem {
    std::vector<std::string> noms;
    std::vector<bool> drapeau;

    void ajoute(const std::string& nom) {
        noms.push_back(nom);
        drapeau.push_back(false);
    }
    void clic(int i) {
        drapeau.assign(noms.size(), false);
        if (existe(i, noms.size())) drapeau[i] = true;
    }
    void ajouteSel(int i) {
        if (existe(i, noms.size())) drapeau[i] = true;
    }
    void echange(int i, int j) {
        if (!existe(i, noms.size()) || !existe(j, noms.size())) return;
        std::swap(noms[i], noms[j]);
        std::vector<bool>::swap(drapeau[i], drapeau[j]);
    }
    void retire(int i) {
        if (!existe(i, noms.size())) return;
        noms.erase(noms.begin() + i);
        drapeau.erase(drapeau.begin() + i);
    }
    void supprime() {
        std::vector<std::string> n2;
        for (size_t k = 0; k < noms.size(); ++k)
            if (!drapeau[k]) n2.push_back(noms[k]);
        noms = n2;
        drapeau.assign(noms.size(), false);
    }
    std::vector<std::string> selection() const {
        std::vector<std::string> s;
        for (size_t k = 0; k < noms.size(); ++k)
            if (drapeau[k]) s.push_back(noms[k]);
        return s;
    }
};

// PAR_INDEX : l'interface garde des index, jamais remis a jour.
struct ParIndex {
    std::vector<std::string> noms;
    std::set<int> gardes;

    void ajoute(const std::string& nom) { noms.push_back(nom); }
    void clic(int i) {
        gardes.clear();
        if (existe(i, noms.size())) gardes.insert(i);
    }
    void ajouteSel(int i) {
        if (existe(i, noms.size())) gardes.insert(i);
    }
    void echange(int i, int j) {
        if (!existe(i, noms.size()) || !existe(j, noms.size())) return;
        std::swap(noms[i], noms[j]);
    }
    void retire(int i) {
        if (!existe(i, noms.size())) return;
        noms.erase(noms.begin() + i);
    }
    void supprime() {
        std::vector<std::string> n2;
        for (size_t k = 0; k < noms.size(); ++k)
            if (gardes.count(static_cast<int>(k)) == 0) n2.push_back(noms[k]);
        noms = n2;
        gardes.clear();
    }
    std::vector<std::string> selection() const {
        std::vector<std::string> s;
        for (size_t k = 0; k < noms.size(); ++k)
            if (gardes.count(static_cast<int>(k)) != 0) s.push_back(noms[k]);
        return s;
    }
};

// PAR_ID : l'interface garde des noms.
struct ParId {
    std::vector<std::string> noms;
    std::set<std::string> gardes;

    void ajoute(const std::string& nom) { noms.push_back(nom); }
    void clic(int i) {
        gardes.clear();
        if (existe(i, noms.size())) gardes.insert(noms[i]);
    }
    void ajouteSel(int i) {
        if (existe(i, noms.size())) gardes.insert(noms[i]);
    }
    void echange(int i, int j) {
        if (!existe(i, noms.size()) || !existe(j, noms.size())) return;
        std::swap(noms[i], noms[j]);
    }
    void retire(int i) {
        if (!existe(i, noms.size())) return;
        noms.erase(noms.begin() + i);
    }
    void supprime() {
        std::vector<std::string> n2;
        for (const std::string& n : noms)
            if (gardes.count(n) == 0) n2.push_back(n);
        noms = n2;
        gardes.clear();
    }
    std::vector<std::string> selection() const {
        std::vector<std::string> s;
        for (const std::string& n : noms)
            if (gardes.count(n) != 0) s.push_back(n);
        return s;
    }
};

static void ecrit(const std::string& conception, const std::string& champ,
                  const std::vector<std::string>& liste) {
    std::cout << conception << " " << champ;
    if (liste.empty()) {
        std::cout << " AUCUN";
    } else {
        for (const std::string& n : liste) std::cout << " " << n;
    }
    std::cout << "\n";
}

int main() {
    DansItem a;
    ParIndex b;
    ParId c;

    std::string cmd;
    while (std::cin >> cmd) {
        if (cmd == "AJOUTE") {
            std::string nom;
            std::cin >> nom;
            a.ajoute(nom);
            b.ajoute(nom);
            c.ajoute(nom);
        } else if (cmd == "CLIC") {
            int i;
            std::cin >> i;
            a.clic(i);
            b.clic(i);
            c.clic(i);
        } else if (cmd == "AJOUTE_SEL") {
            int i;
            std::cin >> i;
            a.ajouteSel(i);
            b.ajouteSel(i);
            c.ajouteSel(i);
        } else if (cmd == "ECHANGE") {
            int i, j;
            std::cin >> i >> j;
            a.echange(i, j);
            b.echange(i, j);
            c.echange(i, j);
        } else if (cmd == "RETIRE") {
            int i;
            std::cin >> i;
            a.retire(i);
            b.retire(i);
            c.retire(i);
        } else if (cmd == "SUPPRIME") {
            a.supprime();
            b.supprime();
            c.supprime();
        }
    }

    ecrit("DANS_ITEM", "PLANCHE", a.noms);
    ecrit("DANS_ITEM", "SELECTION", a.selection());
    ecrit("PAR_INDEX", "PLANCHE", b.noms);
    ecrit("PAR_INDEX", "SELECTION", b.selection());
    ecrit("PAR_ID", "PLANCHE", c.noms);
    ecrit("PAR_ID", "SELECTION", c.selection());

    std::vector<std::string> faux;
    if (b.noms != a.noms || b.selection() != a.selection()) faux.push_back("PAR_INDEX");
    if (c.noms != a.noms || c.selection() != a.selection()) faux.push_back("PAR_ID");
    std::cout << "FAUX";
    if (faux.empty()) {
        std::cout << " AUCUN";
    } else {
        for (const std::string& n : faux) std::cout << " " << n;
    }
    std::cout << "\n";
    return 0;
}