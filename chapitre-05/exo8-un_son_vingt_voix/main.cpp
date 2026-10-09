#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long D = 0, C = 0;
    int n = 0;
    cin >> D >> C >> n;

    vector<long long> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i];

    long long voixMax = 0, retardMax = 0, finPrec = 0;
    int coupes = 0;
    int premier = 0;   // plus ancienne lecture pas encore finie

    for (int i = 0; i < n; ++i) {
        // voix : lectures j <= i avec t_j + D > t_i
        while (t[premier] + D <= t[i]) ++premier;
        const long long voix = i - premier + 1;

        // chargements enchaînés
        long long debut = t[i];
        if (i > 0 && finPrec > debut) debut = finPrec;
        const long long fin = debut + C;
        finPrec = fin;
        const long long retard = fin - t[i];

        // une seule voix rejouée
        const bool coupe = (i + 1 < n) && (t[i + 1] < t[i] + D);
        if (coupe) ++coupes;

        if (voix > voixMax) voixMax = voix;
        if (retard > retardMax) retardMax = retard;

        cout << t[i] << " " << voix << " " << retard << " "
             << (coupe ? "COUPE" : "ENTIER") << "\n";
    }

    cout << "VOIX_MAX " << voixMax << "\n";
    cout << "RETARD_MAX " << retardMax << "\n";
    cout << "COUPES " << coupes << "\n";
    return 0;
}