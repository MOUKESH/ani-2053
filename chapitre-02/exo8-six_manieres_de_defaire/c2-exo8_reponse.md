# Exercice 8

L'exercice consiste à Provoquer, puis défaire, les six situations suivantes:

** Cas 1: Une modification non voulue**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   fichier1.cpp

no changes added to commit (use "git add" and/or "git commit -a")

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git restore fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
nothing to commit, working tree clean

**Cas 2: Un add de trop**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   fichier1.cpp


MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git restore --staged fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   fichier1.cpp

no changes added to commit (use "git add" and/or "git commit -a")

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git restore
fatal: you must specify path(s) to restore

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git restore fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 

**cas 3: Un commit de trop*

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "commit de trop"
[twoseven f832f92] commit de trop
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git reset --soft HEAD~1

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   fichier1.cpp


MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 

**cas 4:**  Un commit poussé qu'il faut annuler

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "feat: un commit temporaire pour le test"
[twoseven 8de73e2] feat: un commit temporaire pour le test
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git push origin twoseven
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 12 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 441 bytes | 441.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/MOUKESH/cars.git
   b5951eb..8de73e2  twoseven -> twoseven

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git revert HEAD --no-edit
[twoseven 58061e7] Revert "feat: un commit temporaire pour le test"
 Date: Fri Sep 18 00:35:38 2026 +0100
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git push origin twoseven
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 12 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 388 bytes | 388.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/MOUKESH/cars.git
   8de73e2..58061e7  twoseven -> twoseven

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 

**cas 5: Un travail en cours qu'il faut mettre de côté**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git stash
Saved working directory and index state WIP on twoseven: 58061e7 Revert "feat: un commit temporaire pour le test"

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git status
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git stash pop
On branch twoseven
Your branch is up to date with 'origin/twoseven'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   fichier1.cpp

no changes added to commit (use "git add" and/or "git commit -a")
Dropped refs/stash@{0} (65a194b21f673d4d3d73acfc41a00d1bdfbbf660)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 

**Cas 6: Un commit « perdu » à retrouver par le reflog**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "commit presque perdu"
[twoseven 5a142f8] commit presque perdu
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git reset --hard HEAD~1
HEAD is now at 58061e7 Revert "feat: un commit temporaire pour le test"

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git reflog
58061e7 (HEAD -> twoseven, origin/twoseven) HEAD@{0}: reset: moving to HEAD~1
5a142f8 HEAD@{1}: commit: commit presque perdu
5a142f8 HEAD@{1}: commit: commit presque perdu
58061e7 (HEAD -> twoseven, origin/twoseven) HEAD@{2}: reset: moving to HEAD
58061e7 (HEAD -> twoseven, origin/twoseven) HEAD@{3}: revert: Revert "feat: un commit temporaire pour le test"
8de73e2 HEAD@{4}: commit: feat: un commit temporaire pour le test
b5951eb HEAD@{5}: reset: moving to HEAD~1
f832f92 HEAD@{6}: commit: commit de trop
b5951eb HEAD@{7}: commit:
8937c1e HEAD@{8}: commit (merge): fix: résolution du conflit sur fichier1.cpp
2326ce3 HEAD@{9}: commit: feat: ma modification locale en attente
da602c7 HEAD@{10}: pull origin twoseven: Fast-forward
90abc2b HEAD@{11}: commit: feat: modification locale pour conflit
95e0e70 HEAD@{12}: pull origin twoseven: Fast-forward
6ff030a HEAD@{13}: commit: Modification locale de la ligne4
b09ca33 HEAD@{14}: commit: troisieme modification dans le fichier1.cpp
5a54d75 HEAD@{15}: commit: deuxieme modification dans le fichier1.cpp
5e6e51e HEAD@{16}: commit: ma premiere modification
8beceb7 (master) HEAD@{17}: checkout: moving from master to twoseven
8beceb7 (master) HEAD@{18}: commit: Deuxieme modification
9051945 HEAD@{19}: commit: Premiere modification
992a3ff HEAD@{20}: commit: Prépare fichier3 pour git add -p

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git reset --hard HEAD@{1}
HEAD is now at 5a142f8 commit presque perdu

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git log --oneline 
5a142f8 (HEAD -> twoseven) commit presque perdu
58061e7 (origin/twoseven) Revert "feat: un commit temporaire pour le test"
8de73e2 feat: un commit temporaire pour le test
b5951eb 
8937c1e fix: résolution du conflit sur fichier1.cpp
9e13d2f Update output message in main function
2326ce3 feat: ma modification locale en attente
da602c7 Update output message in main function
90abc2b feat: modification locale pour conflit
95e0e70 Update output message in fichier1.cpp
6ff030a Modification locale de la ligne4
b09ca33 troisieme modification dans le fichier1.cpp
5a54d75 deuxieme modification dans le fichier1.cpp
5e6e51e ma premiere modification
8beceb7 (master) Deuxieme modification
9051945 Premiere modification
992a3ff Prépare fichier3 pour git add -p
dd5dbce Convert fichier3.md en texte
b26b03a 
aa37265 
36b9049 mise à jour du contenu descriptif du fichier1
666709a le Fichier est modifié
8f3171d ajout du fichier3
e557a18 ajout du fichier2
c3988ab ajout du fichier1

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ 

