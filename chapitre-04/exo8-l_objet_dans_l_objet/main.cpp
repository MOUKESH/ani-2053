#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    std::map<std::string, int> index;
    std::vector<long long> wx, wy, wangle, wechelle, wniveau;

    long long profondeur = 0;

    for (int i = 0; i < n; ++i) {
        std::string nom, parent;
        long long tx, ty, angle, echelle;
        if (!(std::cin >> nom >> parent >> tx >> ty >> angle >> echelle)) {
            break;
        }

        long long x = 0, y = 0, a = 0, e = 1, niveau = 1;
        long long propre = ((angle % 360) + 360) % 360;

        auto it = index.find(parent);
        if (parent == "-" || it == index.end()) {
            x = tx;
            y = ty;
            a = propre;
            e = echelle;
            niveau = 1;
        } else {
            int p = it->second;

            long long ax = tx * wechelle[p];
            long long ay = ty * wechelle[p];

            long long c = 1, s = 0;
            long long ap = wangle[p];
            if (ap == 0) {
                c = 1;
                s = 0;
            } else if (ap == 90) {
                c = 0;
                s = 1;
            } else if (ap == 180) {
                c = -1;
                s = 0;
            } else {
                c = 0;
                s = -1;
            }

            long long rx = ax * c - ay * s;
            long long ry = ax * s + ay * c;

            x = wx[p] + rx;
            y = wy[p] + ry;
            a = ((wangle[p] + propre) % 360 + 360) % 360;
            e = wechelle[p] * echelle;
            niveau = wniveau[p] + 1;
        }

        index[nom] = static_cast<int>(wx.size());
        wx.push_back(x);
        wy.push_back(y);
        wangle.push_back(a);
        wechelle.push_back(e);
        wniveau.push_back(niveau);

        if (niveau > profondeur) {
            profondeur = niveau;
        }

        std::cout << nom << " " << x << " " << y << " " << a << " " << e
                  << "\n";
    }

    std::cout << "PROFONDEUR " << profondeur << "\n";

    return 0;
}