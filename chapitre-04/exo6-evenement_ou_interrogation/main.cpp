#include <iostream>
#include <string>

int main() {
    long long v = 0;
    int n = 0;
    if (!(std::cin >> v >> n)) {
        n = 0;
    }

    bool space = false;
    bool left = false;
    bool right = false;

    long long xe = 0;
    long long xi = 0;
    long long sautsEvenements = 0;
    long long sautsInterrogation = 0;
    long long manques = 0;

    for (int i = 1; i <= n; ++i) {
        int k = 0;
        if (!(std::cin >> k)) {
            break;
        }

        long long plusSpace = 0;

        for (int j = 0; j < k; ++j) {
            std::string ev;
            std::cin >> ev;
            if (ev.size() < 2) {
                continue;
            }
            char signe = ev[0];
            std::string nom = ev.substr(1);
            if (signe != '+' && signe != '-') {
                continue;
            }
            bool enfoncee = (signe == '+');

            if (nom == "SPACE") {
                space = enfoncee;
                if (enfoncee) {
                    ++sautsEvenements;
                    ++plusSpace;
                }
            } else if (nom == "RIGHT") {
                right = enfoncee;
                if (enfoncee) {
                    xe += v;
                }
            } else if (nom == "LEFT") {
                left = enfoncee;
                if (enfoncee) {
                    xe -= v;
                }
            }
        }

        if (space) {
            ++sautsInterrogation;
        } else {
            manques += plusSpace;
        }
        if (right) {
            xi += v;
        }
        if (left) {
            xi -= v;
        }

        std::cout << i << " " << xe << " " << xi << "\n";
    }

    std::cout << "SAUTS EVENEMENTS " << sautsEvenements << "\n";
    std::cout << "SAUTS INTERROGATION " << sautsInterrogation << "\n";
    std::cout << "MANQUES " << manques << "\n";

    return 0;
}