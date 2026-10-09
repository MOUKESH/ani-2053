#include <iostream>
#include <string>
using namespace std;

struct Format {
    const char* nom;
    long long octets;
    bool couleur;
    bool transparence;
    bool flottant;
};

static const Format FORMATS[6] = {
    { "GRAY8",    1,  false, false, false },
    { "GRAY_A16", 2,  false, true,  false },
    { "RGB24",    3,  true,  false, false },
    { "RGBA32",   4,  true,  true,  false },
    { "RGB96F",   12, true,  false, true  },
    { "RGBA128F", 16, true,  true,  true  },
};

static const Format* chercher(const string& nom) {
    for (const Format& f : FORMATS)
        if (nom == f.nom) return &f;
    return nullptr;
}

int main() {
    long long w = 0, h = 0;
    int n = 0;
    cin >> w >> h >> n;
    const long long pixels = w * h;

    long long total = 0;
    int sansPerte = 0, refuses = 0;

    for (int i = 0; i < n; ++i) {
        string s, c;
        cin >> s >> c;
        const Format* fs = chercher(s);
        const Format* fc = chercher(c);

        if (!fs || !fc) {
            cout << s << " " << c << " REFUSE\n";
            ++refuses;
            continue;
        }

        string pertes;
        auto ajouter = [&pertes](const char* nom) {
            if (!pertes.empty()) pertes += "+";
            pertes += nom;
        };
        if (fs->transparence && !fc->transparence) ajouter("TRANSPARENCE");
        if (fs->couleur && !fc->couleur)           ajouter("COULEUR");
        if (fs->flottant && !fc->flottant)         ajouter("ETENDUE");
        if (pertes.empty()) {
            pertes = "AUCUNE";
            ++sansPerte;
        }

        const long long ms = pixels * fs->octets;
        const long long mc = pixels * fc->octets;
        total += mc;
        cout << s << " " << c << " " << ms << " " << mc << " " << pertes << "\n";
    }

    cout << "TOTAL " << total << "\n";
    cout << "SANS_PERTE " << sansPerte << "\n";
    cout << "REFUSES " << refuses << "\n";
    return 0;
}