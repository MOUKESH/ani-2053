#include <iostream>
#include <string>
#include <vector>
using namespace std;

static int hexval(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return 0;
}

static bool a(const vector<int>& b, size_t pos, const vector<int>& m) {
    if (pos + m.size() > b.size()) return false;
    for (size_t i = 0; i < m.size(); ++i)
        if (b[pos + i] != m[i]) return false;
    return true;
}

static string conteneur(const vector<int>& b) {
    const size_t n = b.size();
    if (n >= 12 && a(b, 4, {0x66, 0x74, 0x79, 0x70})) return "MP4";
    if (n >= 4 && a(b, 0, {0x1A, 0x45, 0xDF, 0xA3})) return "WEBM";
    if (n >= 12 && a(b, 0, {0x52, 0x49, 0x46, 0x46})
        && a(b, 8, {0x57, 0x41, 0x56, 0x45})) return "WAV";
    if (n >= 4 && a(b, 0, {0x4F, 0x67, 0x67, 0x53})) return "OGG";
    if (n >= 4 && a(b, 0, {0x66, 0x4C, 0x61, 0x43})) return "FLAC";
    if (n >= 3 && a(b, 0, {0x49, 0x44, 0x33})) return "MP3";
    if (n >= 2 && b[0] == 0xFF && b[1] >= 0xE0) return "MP3";
    return "INCONNU";
}

static string codec(const string& c) {
    if (c == "mp4a") return "aac";
    if (c == "Opus" || c == "opus") return "opus";
    if (c == "avc1" || c == "avc3") return "h264";
    if (c == "hvc1" || c == "hev1") return "h265";
    if (c == "vp08") return "vp8";
    if (c == "vp09") return "vp9";
    if (c == "mp4v") return "mpeg4";
    if (c == ".mp3") return "mp3";
    if (c == "twos" || c == "sowt" || c == "lpcm") return "pcm";
    return c;
}

static bool lisible(const string& c) {
    return c == "mjpa" || c == "jpeg" || c == "MJPG" || c == "avc1"
        || c == "avc3" || c == "hvc1" || c == "hev1" || c == "av01";
}

int main() {
    int n = 0;
    cin >> n;
    int nbMp4 = 0, nbLisibles = 0, nbInconnus = 0;

    for (int i = 0; i < n; ++i) {
        string nom, hex;
        int p = 0;
        cin >> nom >> hex >> p;

        vector<int> b;
        if (hex != "-")
            for (size_t k = 0; k + 1 < hex.size(); k += 2)
                b.push_back(hexval(hex[k]) * 16 + hexval(hex[k + 1]));

        vector<string> types(p), codes(p);
        for (int j = 0; j < p; ++j) cin >> types[j] >> codes[j];

        const string cont = conteneur(b);
        cout << nom << " " << cont << "\n";

        if (cont == "INCONNU") { ++nbInconnus; continue; }
        if (cont != "MP4") continue;

        ++nbMp4;
        for (int j = 0; j < p; ++j)
            cout << nom << " PISTE " << (j + 1) << " "
                 << (types[j] == "vide" ? "VIDEO" : "AUDIO") << " "
                 << codec(codes[j]) << "\n";

        string verdict = "SANS_IMAGE";
        for (int j = 0; j < p; ++j) {
            if (types[j] == "vide") {
                verdict = lisible(codes[j]) ? "LISIBLE" : "ECHEC";
                break;
            }
        }
        if (verdict == "LISIBLE") ++nbLisibles;
        cout << nom << " LECTEUR " << verdict << "\n";
    }

    cout << "MP4 " << nbMp4 << "\n";
    cout << "LISIBLES " << nbLisibles << "\n";
    cout << "INCONNUS " << nbInconnus << "\n";
    return 0;
}