#include <iostream>
#include <string>
using namespace std;

int main() {
    long long seuil = 0;
    int n = 0;
    cin >> seuil >> n;

    long long memoire = 0;
    int flux = 0, refuses = 0;

    for (int i = 0; i < n; ++i) {
        string nom;
        long long freq = 0, canaux = 0, bits = 0, duree = 0, fichier = 0;
        cin >> nom >> freq >> canaux >> bits >> duree >> fichier;

        if (bits != 8 && bits != 16 && bits != 24 && bits != 32) {
            cout << nom << " REFUSE\n";
            ++refuses;
            continue;
        }

        const long long brut = freq * canaux * (bits / 8) * duree / 1000;
        const long long pourcent = brut > 0 ? fichier * 100 / brut : 0;

        if (brut > seuil) {
            cout << nom << " " << brut << " " << pourcent << " FLUX\n";
            ++flux;
        } else {
            cout << nom << " " << brut << " " << pourcent << " MEMOIRE\n";
            memoire += brut;
        }
    }

    cout << "MEMOIRE " << memoire << "\n";
    cout << "FLUX " << flux << "\n";
    cout << "REFUSES " << refuses << "\n";
    return 0;
}