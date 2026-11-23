#include <iostream>
#include <string>

// Ecrit un nombre de secondes sous la forme m:ss.
static std::string formaterDuree(long long secondes)
{
    long long minutes = secondes / 60;
    long long reste = secondes % 60;
    std::string texte = std::to_string(minutes) + ":";
    if (reste < 10) {
        texte += "0";
    }
    texte += std::to_string(reste);
    return texte;
}

int main()
{
    bool enCours = false;
    std::string nom;
    long long debut = 0;
    long long minimum = 0;
    long long parJour = 0;
    long long gestes = 0;
    long long attente = 0;
    long long totalSecondes = 0;

    long long instant = 0;
    std::string commande;
    while (std::cin >> instant >> commande) {
        if (commande == "DEBUT") {
            std::cin >> nom >> minimum >> parJour;
            enCours = true;
            debut = instant;
            gestes = 0;
            attente = 0;
        } else if (commande == "FIN") {
            std::string nomFin;
            std::cin >> nomFin;
            if (!enCours) {
                continue;
            }
            long long enTrop = (gestes > minimum) ? gestes - minimum : 0;
            long long duree = instant - debut;
            long long jour = (attente * parJour) / 1000;
            totalSecondes += jour;
            std::cout << nom << " GESTES " << gestes << " EN_TROP " << enTrop
                      << " DUREE " << duree << " ATTENTE " << attente
                      << " JOUR " << formaterDuree(jour) << "\n";
            enCours = false;
        } else if (commande == "ATTENTE") {
            long long d = 0;
            std::cin >> d;
            if (enCours) {
                attente += d;
            }
        } else if (commande == "TOUCHE") {
            std::string touche;
            std::cin >> touche;
            if (enCours) {
                ++gestes;
            }
        } else {
            // CLIC, MOLETTE, GLISSE : un geste sans argument
            if (enCours) {
                ++gestes;
            }
        }
    }

    if (enCours) {
        std::cout << nom << " INACHEVEE\n";
    }
    std::cout << "TOTAL_JOUR " << formaterDuree(totalSecondes) << "\n";
    return 0;
}