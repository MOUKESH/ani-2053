#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Utilisation d'entiers 64 bits pour éviter tout dépassement de capacité lors des multiplications
typedef long long ll;

// Division arrondie à l'entier le plus proche (half-up)
ll round_div(ll a, ll b) {
    return (2 * a + b) / (2 * b);
}

struct PolicyResult {
    string name;
    ll vx, vy, vw, vh;
    ll mw, mh;
};

int main() {
    // Optimisation des entrées/sorties standard
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll RW, RH, AW, AH, W, H;
    if (!(cin >> RW >> RH >> AW >> AH >> W >> H)) {
        return 0;
    }

    PolicyResult results[6];
    bool has_ref = (RW > 0 && RH > 0);

    // 1. FOLLOW_WINDOW
    results[0] = {"FOLLOW_WINDOW", 0, 0, W, H, W, H};

    if (!has_ref) {
        // Règle 7 : Sans référence, STRETCH, FIT_LETTERBOX, INTEGER_SCALE et FIT_CROP imitent FOLLOW_WINDOW
        results[1] = {"STRETCH", 0, 0, W, H, W, H};
        results[2] = {"FIT_LETTERBOX", 0, 0, W, H, W, H};
        results[3] = {"INTEGER_SCALE", 0, 0, W, H, W, H};
        results[4] = {"FIT_CROP", 0, 0, W, H, W, H};
    } else {
        // 2. STRETCH
        results[1] = {"STRETCH", 0, 0, W, H, RW, RH};

        // 3. FIT_LETTERBOX
        ll vw_lb, vh_lb;
        if (W * RH <= H * RW) {
            vw_lb = W;
            vh_lb = round_div(RH * W, RW);
        } else {
            vh_lb = H;
            vw_lb = round_div(RW * H, RH);
        }
        ll vx_lb = (W - vw_lb) / 2;
        ll vy_lb = (H - vh_lb) / 2;
        results[2] = {"FIT_LETTERBOX", vx_lb, vy_lb, vw_lb, vh_lb, RW, RH};

        // 4. INTEGER_SCALE
        if (W >= RW && H >= RH) {
            ll k = min(W / RW, H / RH);
            if (k >= 1) {
                ll vw_is = RW * k;
                ll vh_is = RH * k;
                ll vx_is = (W - vw_is) / 2;
                ll vy_is = (H - vh_is) / 2;
                results[3] = {"INTEGER_SCALE", vx_is, vy_is, vw_is, vh_is, RW, RH};
            } else {
                results[3] = {"INTEGER_SCALE", vx_lb, vy_lb, vw_lb, vh_lb, RW, RH};
            }
        } else {
            results[3] = {"INTEGER_SCALE", vx_lb, vy_lb, vw_lb, vh_lb, RW, RH};
        }

        // 5. FIT_CROP
        ll mw_fc, mh_fc;
        if (W * RH > H * RW) {
            mw_fc = RW;
            mh_fc = round_div(RW * H, W);
        } else {
            mw_fc = round_div(RH * W, H);
            mh_fc = RH;
        }
        results[4] = {"FIT_CROP", 0, 0, W, H, mw_fc, mh_fc};
    }

    // 6. MANUAL
    results[5] = {"MANUAL", 0, 0, AW, AH, AW, AH};

    // Affichage des 6 politiques et calcul des bandes
    int bandes = 0;
    for (int i = 0; i < 6; ++i) {
        cout << results[i].name << " "
             << results[i].vx << " "
             << results[i].vy << " "
             << results[i].vw << " "
             << results[i].vh << " "
             << results[i].mw << " "
             << results[i].mh << "\n";

        if (results[i].vw < W || results[i].vh < H) {
            bandes++;
        }
    }

    // Calcul final : BANDES et DEFORMATION
    cout << "BANDES " << bandes << "\n";
    bool deformation = (has_ref && (W * RH != H * RW));
    cout << "DEFORMATION " << (deformation ? "OUI" : "NON") << "\n";

    return 0;
}