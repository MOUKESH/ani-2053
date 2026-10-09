#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Glyphe {
    long long avance, x0, y0, x1, y1;
};

int main() {
    int g = 0;
    cin >> g;
    map<char, Glyphe> table;
    for (int i = 0; i < g; ++i) {
        string c;
        Glyphe gl{};
        cin >> c >> gl.avance >> gl.x0 >> gl.y0 >> gl.x1 >> gl.y1;
        table[c[0]] = gl;
    }

    int k = 0;
    cin >> k;
    map<string, long long> crenage;
    for (int i = 0; i < k; ++i) {
        string ab;
        long long v = 0;
        cin >> ab >> v;
        crenage[ab] = v;
    }

    string texte;
    long long ox = 0, oy = 0;
    cin >> texte >> ox >> oy;

    long long x = ox;
    bool dessine = false;
    long long minx = 0, miny = 0, maxx = 0, maxy = 0;
    int absents = 0;

    for (size_t i = 0; i < texte.size(); ++i) {
        const char c = texte[i];
        auto it = table.find(c);
        if (it == table.end()) {
            cout << c << " ABSENT\n";
            ++absents;
            continue;
        }
        const Glyphe& gl = it->second;
        cout << c << " " << x << "\n";

        if (gl.x1 > gl.x0 && gl.y1 > gl.y0) {
            const long long rx0 = x + gl.x0, ry0 = oy + gl.y0;
            const long long rx1 = x + gl.x1, ry1 = oy + gl.y1;
            if (!dessine) {
                minx = rx0; miny = ry0; maxx = rx1; maxy = ry1;
                dessine = true;
            } else {
                if (rx0 < minx) minx = rx0;
                if (ry0 < miny) miny = ry0;
                if (rx1 > maxx) maxx = rx1;
                if (ry1 > maxy) maxy = ry1;
            }
        }

        x += gl.avance;
        if (i + 1 < texte.size()) {
            const string couple = string(1, c) + texte[i + 1];
            auto kt = crenage.find(couple);
            if (kt != crenage.end()) x += kt->second;
        }
    }

    cout << "CURSEUR " << x << "\n";
    if (!dessine) {
        cout << "BOITE AUCUNE\n";
        cout << "MONTE 0\n";
        cout << "DESCEND 0\n";
        cout << "ECRAN RIEN\n";
    } else {
        cout << "BOITE " << minx << " " << miny << " " << maxx << " " << maxy << "\n";
        cout << "MONTE " << (miny < oy ? oy - miny : 0) << "\n";
        cout << "DESCEND " << (maxy > oy ? maxy - oy : 0) << "\n";
        const char* verdict = "VISIBLE";
        if (maxy <= 0) verdict = "HORS";
        else if (miny < 0) verdict = "COUPE";
        cout << "ECRAN " << verdict << "\n";
    }
    cout << "ABSENTS " << absents << "\n";
    return 0;
}