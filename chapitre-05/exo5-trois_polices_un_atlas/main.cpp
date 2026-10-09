#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Groupe {
    string nom;
    long long n, w, h;
    long long x1, y1, x2, y2;   // premier et dernier glyphe posés
};

int main() {
    long long P = 0, L = 0;
    int g = 0;
    cin >> P >> L >> g;

    if (g == 0) {
        cout << "AUCUN\n";
        return 0;
    }

    vector<Groupe> groupes(g);
    long long besoin = 0, occupe = 0;
    for (Groupe& gr : groupes) {
        cin >> gr.nom >> gr.n >> gr.w >> gr.h;
        besoin += gr.n * (gr.w + P) * (gr.h + P);
        occupe += gr.n * gr.w * gr.h;
    }

    long long W = L;
    if (L == 0) {
        W = 512;
        while (W * W < 2 * besoin && W < 4096) W *= 2;
    }
    long long H = W;

    for (int essai = 1; essai <= 8; ++essai) {
        bool ok = true;
        long long x = P, y = P, e = 0;

        for (Groupe& gr : groupes) {
            const long long rw = gr.w + P;
            const long long rh = gr.h + P;
            for (long long i = 0; i < gr.n; ++i) {
                if (x + rw > W - P) {
                    x = P;
                    y = y + e + P;
                    e = 0;
                    if (x + rw > W - P) { ok = false; break; }
                }
                if (y + rh > H - P) { ok = false; break; }
                if (i == 0) { gr.x1 = x; gr.y1 = y; }
                gr.x2 = x;
                gr.y2 = y;
                x += rw;
                if (rh > e) e = rh;
            }
            if (!ok) break;
        }

        if (ok) {
            const long long aire = W * H;
            cout << "ESSAIS " << essai << "\n";
            cout << "TEXTURE " << W << " " << H << "\n";
            for (const Groupe& gr : groupes)
                cout << gr.nom << " " << gr.x1 << " " << gr.y1 << " "
                     << gr.x2 << " " << gr.y2 << "\n";
            cout << "OCCUPE " << occupe << "\n";
            cout << "PERDU " << (aire - occupe) * 100 / aire << "\n";
            return 0;
        }

        if (W == H) W *= 2;
        else        H = W;
    }

    cout << "ESSAIS 8\n";
    cout << "ECHEC\n";
    return 0;
}