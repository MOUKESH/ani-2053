#include <cmath>
#include <iostream>

int main() {
    const double pi = 3.141592653589793;

    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    long long visibles = 0;
    long long refuses = 0;

    for (int i = 0; i < n; ++i) {
        long long r = 0;
        long long segs = 0;
        if (!(std::cin >> r >> segs)) {
            break;
        }

        if (segs < 3) {
            ++refuses;
            std::cout << r << " " << segs << " REFUSE\n";
            continue;
        }

        double g = static_cast<double>(r) *
                   (1.0 - std::cos(pi / static_cast<double>(segs)));
        long long ecart = static_cast<long long>(std::floor(g * 1000.0));

        if (g == 0.0) {
            std::cout << r << " " << segs << " " << ecart << " JAMAIS\n";
            continue;
        }

        long long zoom = static_cast<long long>(std::ceil(100.0 / g));

        if (zoom <= 100) {
            ++visibles;
            std::cout << r << " " << segs << " " << ecart << " " << zoom
                      << " VISIBLE\n";
        } else {
            std::cout << r << " " << segs << " " << ecart << " " << zoom
                      << " INVISIBLE\n";
        }
    }

    std::cout << "VISIBLES " << visibles << "\n";
    std::cout << "REFUSES " << refuses << "\n";

    return 0;
}