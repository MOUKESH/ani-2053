#include "NKWindow/NKMain.h"
#include "NKThreading/NkThread.h"
#include "NKThreading/NkThreadPool.h"
#include "NKTime/NkChrono.h"      // chemin à vérifier
#include <cstdio>
#include <vector>

using namespace nkentseu;
using namespace nkentseu::threading;

static const int NB = 8;            // 1 pour « un seul fil », 8 pour la course
static const int INCREMENTS = 1000000;

// Volontairement NON protégé : ni atomic, ni verrou.
static int compteur = 0;

static void Travail() {
    for (int i = 0; i < INCREMENTS; ++i) {
        compteur += 1;
    }
}

int nkmain(const NkEntryState&) {
    std::vector<NkThread> fils;
    fils.reserve(NB);

    for (int i = 0; i < NB; ++i) {
        fils.emplace_back([](void*) { Travail(); });
    }
    for (NkThread& f : fils) {
        f.Join();
    }

    std::printf("total %d, attendu %d\n", compteur, NB * INCREMENTS);
    return 0;
}