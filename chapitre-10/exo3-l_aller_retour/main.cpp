#include <cstdio>
#include <iostream>
#include <string>

struct Camera {
    double cx = 0.0;
    double cy = 0.0;
    double zoom = 1.0;
};

// La taille de la fenetre n'est jamais stockee : elle est passee en parametre.
static void versMonde(const Camera& c, double w, double h, double px, double py,
                      double& x, double& y) {
    x = c.cx + (px - w / 2) / c.zoom;
    y = c.cy + (py - h / 2) / c.zoom;
}

static void versPixel(const Camera& c, double w, double h, double mx, double my,
                      double& x, double& y) {
    x = (mx - c.cx) * c.zoom + w / 2;
    y = (my - c.cy) * c.zoom + h / 2;
}

static void deplace(Camera& c, double dx, double dy) {
    c.cx -= dx / c.zoom;
    c.cy -= dy / c.zoom;
}

static void zoomCurseur(Camera& c, double w, double h, double f, double px, double py) {
    double ax, ay;
    versMonde(c, w, h, px, py, ax, ay);  // le point se note AVANT de changer le zoom
    c.zoom *= f;
    if (c.zoom < 0.02) c.zoom = 0.02;
    if (c.zoom > 64.0) c.zoom = 64.0;
    c.cx = ax - (px - w / 2) / c.zoom;
    c.cy = ay - (py - h / 2) / c.zoom;
}

static double pasGrille(const Camera& c, double m) {
    double s = 1.0;
    while (s * c.zoom < m) s *= 2.0;
    while (s * 0.5 * c.zoom >= m) s /= 2.0;
    return s;
}

static std::string fmt(double v, const char* format = "%.2f") {
    char buf[64];
    std::snprintf(buf, sizeof buf, format, v);
    std::string s = buf;
    if (s == "-0.00") s = "0.00";
    return s;
}

int main() {
    double w, h;
    if (!(std::cin >> w >> h)) return 0;

    Camera cam;
    std::string cmd;
    while (std::cin >> cmd) {
        if (cmd == "VERS_MONDE") {
            double px, py, x, y;
            std::cin >> px >> py;
            versMonde(cam, w, h, px, py, x, y);
            std::printf("MONDE %s %s\n", fmt(x).c_str(), fmt(y).c_str());
        } else if (cmd == "VERS_PIXEL") {
            double mx, my, x, y;
            std::cin >> mx >> my;
            versPixel(cam, w, h, mx, my, x, y);
            std::printf("PIXEL %s %s\n", fmt(x).c_str(), fmt(y).c_str());
        } else if (cmd == "DEPLACE") {
            double dx, dy;
            std::cin >> dx >> dy;
            deplace(cam, dx, dy);
        } else if (cmd == "ZOOM") {
            double f, px, py;
            std::cin >> f >> px >> py;
            zoomCurseur(cam, w, h, f, px, py);
        } else if (cmd == "GRILLE") {
            double m;
            std::cin >> m;
            std::printf("GRILLE %s\n", fmt(pasGrille(cam, m), "%.6f").c_str());
        } else if (cmd == "ORIGINE") {
            cam = Camera();
        }
    }

    std::printf("CENTRE %s %s\n", fmt(cam.cx).c_str(), fmt(cam.cy).c_str());
    std::printf("ZOOM %s\n", fmt(cam.zoom).c_str());
    return 0;
}