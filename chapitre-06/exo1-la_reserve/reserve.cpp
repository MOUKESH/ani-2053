#include "NKWindow/NKMain.h"
#include "NKThreading/NkThread.h"
#include "NKThreading/NkThreadPool.h"
#include "NKTime/NkChrono.h"      // chemin à vérifier
#include <cstdio>
#include <vector>

using namespace nkentseu;
using namespace nkentseu::threading;

static const int NB = 200;
static long long gResultats[NB];   // une case par tâche : pas de course

static void Tache(int idx, int n) {
    long long s = 0;
    for (int i = 0; i < n; ++i) s += i;
    gResultats[idx] = s;           // le résultat est gardé, donc pas supprimé en Release
}

static long long MesureReserve(int n, nk_uint32* ouvriers) {
    NkChrono chrono;
    {
        NkThreadPool pool;
        *ouvriers = pool.GetNumWorkers();
        for (int i = 0; i < NB; ++i)
            pool.Enqueue([i, n]() { Tache(i, n); });
        pool.Join();
    }
    return static_cast<long long>(chrono.Elapsed().milliseconds);
}

static long long MesureFils(int n) {
    NkChrono chrono;
    {
        std::vector<NkThread> fils;
        fils.reserve(NB);
        for (int i = 0; i < NB; ++i)
            fils.emplace_back([i, n](void*) { Tache(i, n); });
        for (NkThread& f : fils) f.Join();     // les 200 sont joints
    }
    return static_cast<long long>(chrono.Elapsed().milliseconds);
}

int nkmain(const NkEntryState&) {
    nk_uint32 ouvriers = 0;

    std::printf("--- tache courte (1000 additions) ---\n");
    for (int k = 0; k < 3; ++k)
        std::printf("reserve %lld ms\n", MesureReserve(1000, &ouvriers));
    for (int k = 0; k < 3; ++k)
        std::printf("fils    %lld ms\n", MesureFils(1000));
    std::printf("ouvriers %u\n", static_cast<unsigned>(ouvriers));

    std::printf("--- tache longue (100000 additions) ---\n");
    std::printf("reserve %lld ms\n", MesureReserve(100000, &ouvriers));
    std::printf("fils    %lld ms\n", MesureFils(100000));

    long long somme = 0;
    for (int i = 0; i < NB; ++i) somme += gResultats[i];
    std::printf("somme %lld\n", somme);          // affiche le résultat
    return 0;
}