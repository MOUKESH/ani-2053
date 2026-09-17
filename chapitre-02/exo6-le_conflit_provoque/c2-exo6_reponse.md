# Exercice 6

Cette exercice consistait à modifier la même ligne d'un même fichier et pousser l'un des 
deux. Provoquer le refus, puis le conflit, puis le résourdre depuis deux répertoires de 
travail, ou deux clones.

## Messages obtenus

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "feat: ma modification locale en attente"
[twoseven 2326ce3] feat: ma modification locale en attente
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git pull origin twoseven
From https://github.com/MOUKESH/cars
 * branch            twoseven   -> FETCH_HEAD
warning: Cannot merge binary files: fichier1.cpp (HEAD vs. 9e13d2f385a62949a8685fb3ed7a2c3ddb516314)
Auto-merging fichier1.cpp
CONFLICT (content): Merge conflict in fichier1.cpp
Automatic merge failed; fix conflicts and then commit the result.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven|MERGING)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven|MERGING)
$ git commit -m "fix: résolution du conflit sur fichier1.cpp"
[twoseven 8937c1e] fix: résolution du conflit sur fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git push origin twoseven
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 12 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 698 bytes | 349.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/MOUKESH/cars.git
   9e13d2f..8937c1e  twoseven -> twoseven

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 