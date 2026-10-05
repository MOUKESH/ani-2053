#include <iostream>

int main() {
    long long C = 1, R = 1, W = 0, H = 0, F = 1, D = 1, P = 1;
    std::cin >> C >> R >> W >> H >> F >> D >> P;

    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    long long courante = 0;
    long long accumule = 0;
    long long avances = 0;
    long long plafonnes = 0;

    for (int i = 0; i < n; ++i) {
        long long dt = 0;
        if (!(std::cin >> dt)) {
            break;
        }

        if (dt > P) {
            dt = P;
            ++plafonnes;
        }

        accumule += dt;

        long long passages = accumule / D;
        accumule -= passages * D;
        courante = (courante + passages) % F;
        avances += passages;

        std::cout << courante << " " << (courante % C) * W << " "
                  << (courante / C) * H << " " << W << " " << H << "\n";
    }

    std::cout << "AVANCES " << avances << "\n";
    std::cout << "PLAFONNES " << plafonnes << "\n";

    return 0;
}