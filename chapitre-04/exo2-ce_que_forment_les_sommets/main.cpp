#include <iostream>
#include <string>

int main() {
    int n = 0;
    if (!(std::cin >> n)) {
        n = 0;
    }

    long long points = 0;
    long long segments = 0;
    long long triangles = 0;
    long long refuses = 0;

    for (int i = 0; i < n; ++i) {
        std::string type;
        long long s = 0;
        if (!(std::cin >> type >> s)) {
            break;
        }

        long long nombre = 0;
        long long restants = 0;
        std::string unite;

        if (type == "POINTS") {
            nombre = s;
            restants = 0;
            unite = "POINTS";
        } else if (type == "LINES") {
            nombre = s / 2;
            restants = s % 2;
            unite = "SEGMENTS";
        } else if (type == "LINE_STRIP") {
            if (s >= 2) {
                nombre = s - 1;
                restants = 0;
            } else {
                nombre = 0;
                restants = s;
            }
            unite = "SEGMENTS";
        } else if (type == "TRIANGLES") {
            nombre = s / 3;
            restants = s % 3;
            unite = "TRIANGLES";
        } else if (type == "TRIANGLE_STRIP" || type == "TRIANGLE_FAN") {
            if (s >= 3) {
                nombre = s - 2;
                restants = 0;
            } else {
                nombre = 0;
                restants = s;
            }
            unite = "TRIANGLES";
        } else {
            ++refuses;
            std::cout << type << " " << s << " REFUSE\n";
            continue;
        }

        if (unite == "POINTS") {
            points += nombre;
        } else if (unite == "SEGMENTS") {
            segments += nombre;
        } else {
            triangles += nombre;
        }

        std::cout << type << " " << s << " " << nombre << " " << unite << " "
                  << restants << "\n";
    }

    std::cout << "POINTS " << points << "\n";
    std::cout << "SEGMENTS " << segments << "\n";
    std::cout << "TRIANGLES " << triangles << "\n";
    std::cout << "REFUSES " << refuses << "\n";

    return 0;
}