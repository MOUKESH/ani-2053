# Demo 1

## Preuve

**point de divergence**
MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git status
On branch master
Your branch is ahead of 'origin/master' by 4 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git switch test-merge
Switched to branch 'test-merge'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ git log --oneline --decorate -5
f04b156 (HEAD -> test-merge, origin/master, origin/HEAD) Modification  du fichier1
04683f2 Modification en bas du fichier1
f1c42f3 Modification en bas du fichier
c29409f Update output message in fichier1.cpp
6281482 Add version message to main function

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ echo "Modification sur la branche test-merge" > fusion.txt
 
MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ git add fusion.txt
warning: in the working copy of 'fusion.txt', LF will be replaced by CRLF the next time Git touches it

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ git commit -m "Modification sur test-merge"
[test-merge 1c53418] Modification sur test-merge
 1 file changed, 1 insertion(+)
 create mode 100644 fusion.txt


**Fusion**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ git switch master
Switched to branch 'master'
Your branch is ahead of 'origin/master' by 4 commits.
  (use "git push" to publish your local commits)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git merge --no-ff test-merge -m "Fusion de test-merge dans master"
Merge made by the 'ort' strategy.
 fusion.txt | 1 +
 1 file changed, 1 insertion(+)
 create mode 100644 fusion.txt



**Affichage du graphique final**

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git log --oneline --graph --decorate --all
*   03f42be (HEAD -> master) Fusion de test-merge dans master
|\  
| * 1c53418 (test-merge) Modification sur test-merge
* | ec40466 Ajout du travail important
* | 3b5cf3c Suppression du gros fichier
* | 234cffc Ajout d'un gros fichier de 10 Mo
* | 213aa51 (test-rebase) Autre modif sur master pour le rebase
|/  
*   f04b156 (origin/master, origin/HEAD) Modification  du fichier1
|\  
| * f1c42f3 Modification en bas du fichier
| * c29409f Update output message in fichier1.cpp
| * 6281482 Add version message to main function
* | 04683f2 Modification en bas du fichier1
| | * 5df8b59 (twoseven) Modification en bas du fichier
| | * a9af426 Test fusion endroits eloignes
| | * fd507ca Vraie modification en bas du fichier
| | * 86e7b6d Modification en bas du fichier
| | * e24a93f Enhance output with result display comment
| | * e4ee7a2 Implement square calculation in main function
| | | * d6d0f8b (origin/twoseven) Add modifications and additional output messages
| | | * 1c5728f Update greeting message in main function
| | | * 81784ac Enhance output with result display comment
| | | * 0f88acd Implement square calculation in main functio
n
| | |/  
| | * efe61d7 
| | * 5a142f8 commit presque perdu
| | * 58061e7 Revert "feat: un commit temporaire pour le tes
t"
| | * 8de73e2 feat: un commit temporaire pour le test
| | * b5951eb 
| | *   8937c1e fix: résolution du conflit sur fichier1.cpp
| | |\  
| | | * 9e13d2f Update output message in main function
| | * | 2326ce3 feat: ma modification locale en attente
| | |/  
| | * da602c7 Update output message in main function
| | * 90abc2b feat: modification locale pour conflit
| | * 95e0e70 Update output message in fichier1.cpp
| | * 6ff030a Modification locale de la ligne4
| | * b09ca33 troisieme modification dans le fichier1.cpp
| | * 5a54d75 deuxieme modification dans le fichier1.cpp
| | * 5e6e51e ma premiere modification
| |/  
|/|   
* | 8beceb7 Deuxieme modification
* | 9051945 Premiere modification
* | 992a3ff Prépare fichier3 pour git add -p
* | dd5dbce Convert fichier3.md en texte
|/  
* b26b03a 
* aa37265 
* 36b9049 mise à jour du contenu descriptif du fichier1
* 666709a le Fichier est modifié
* 8f3171d ajout du fichier3
* e557a18 ajout du fichier2
* c3988ab ajout du fichier1
(END)