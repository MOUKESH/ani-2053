#include <iostream>
#include <string>
#include <vector>
using namespace std;

static int hexval(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

// Vrai si les octets b contiennent le motif à partir de pos.
// Un octet absent fait échouer la comparaison (la règle ne s'applique pas).
static bool debut(const vector<int>& b, size_t pos, const vector<int>& motif) {
    if (pos + motif.size() > b.size()) return false;
    for (size_t i = 0; i < motif.size(); ++i)
        if (b[pos + i] != motif[i]) return false;
    return true;
}

static bool dans(int v, const vector<int>& ensemble) {
    for (int x : ensemble) if (x == v) return true;
    return false;
}

// Renvoie le nom du format, ou "" si REFUSE.
static string reconnaitre(long long taille, const vector<int>& b) {
    if (taille < 4) return "";
    if (taille >= 8 && debut(b, 0, {0x89, 0x50, 0x4E, 0x47})) return "PNG";
    if (debut(b, 0, {0xFF, 0xD8, 0xFF})) return "JPEG";
    if (debut(b, 0, {0x42, 0x4D})) return "BMP";
    if (debut(b, 0, {0x71, 0x6F, 0x69, 0x66})) return "QOI";
    if (debut(b, 0, {0x47, 0x49, 0x46, 0x38})) return "GIF";
    if (b.size() >= 4 && b[0] == 0x00 && b[1] == 0x00
        && (b[2] == 0x01 || b[2] == 0x02) && b[3] == 0x00) return "ICO";
    if (taille >= 10 && debut(b, 0, {0x23, 0x3F})) return "HDR";
    if (debut(b, 0, {0x76, 0x2F, 0x31, 0x01})) return "EXR";
    if (b.size() >= 2 && b[0] == 0x50 && b[1] >= 0x31 && b[1] <= 0x36) {
        if (b[1] == 0x31 || b[1] == 0x34) return "PBM";
        if (b[1] == 0x32 || b[1] == 0x35) return "PGM";
        return "PPM";
    }
    if (taille >= 18 && b.size() >= 3
        && dans(b[2], {0x00, 0x01, 0x02, 0x03, 0x09, 0x0A, 0x0B})) return "TGA";

    size_t pos = 0;
    if (debut(b, 0, {0xEF, 0xBB, 0xBF})) pos = 3;
    while (pos < b.size() && dans(b[pos], {0x20, 0x09, 0x0A, 0x0D})) ++pos;
    if (debut(b, pos, {0x3C, 0x3F, 0x78, 0x6D, 0x6C})
        || debut(b, pos, {0x3C, 0x73, 0x76, 0x67})) return "SVG";
    return "";
}

static bool extension_juste(const string& format, const string& ext) {
    if (format == "PNG")  return ext == "png";
    if (format == "JPEG") return ext == "jpg" || ext == "jpeg";
    if (format == "BMP")  return ext == "bmp";
    if (format == "QOI")  return ext == "qoi";
    if (format == "GIF")  return ext == "gif";
    if (format == "ICO")  return ext == "ico" || ext == "cur";
    if (format == "HDR")  return ext == "hdr";
    if (format == "EXR")  return ext == "exr";
    if (format == "PBM")  return ext == "pbm";
    if (format == "PGM")  return ext == "pgm";
    if (format == "PPM")  return ext == "ppm";
    if (format == "TGA")  return ext == "tga";
    if (format == "SVG")  return ext == "svg";
    return false;
}

static string extension_de(const string& nom) {
    size_t p = nom.rfind('.');
    if (p == string::npos) return "";
    string e = nom.substr(p + 1);
    for (char& c : e)
        if (c >= 'A' && c <= 'Z') c = static_cast<char>(c - 'A' + 'a');
    return e;
}

int main() {
    int n = 0;
    cin >> n;
    int lus = 0, mensonges = 0, refuses = 0;

    for (int i = 0; i < n; ++i) {
        string nom, hex;
        long long taille = 0;
        cin >> nom >> taille >> hex;

        vector<int> b;
        if (hex != "-") {
            for (size_t k = 0; k + 1 < hex.size(); k += 2)
                b.push_back(hexval(hex[k]) * 16 + hexval(hex[k + 1]));
        }

        string format = reconnaitre(taille, b);
        if (format.empty()) {
            cout << nom << " REFUSE\n";
            ++refuses;
        } else {
            ++lus;
            if (extension_juste(format, extension_de(nom))) {
                cout << nom << " " << format << " OK\n";
            } else {
                cout << nom << " " << format << " MENT\n";
                ++mensonges;
            }
        }
    }
    cout << "LUS " << lus << "\n";
    cout << "MENSONGES " << mensonges << "\n";
    cout << "REFUSES " << refuses << "\n";
    return 0;
}