# Exercice 10

le devoir consiste a  faire deux fois la même intégration Sur mon dépôt d'essai : une fois par fusion, une fois en rejouant. Comparez les deux graphes, et dites lequel vous préférez lire, avec un argument.

## Par Fusion

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git checkout -b test-merge
Switched to a new branch 'test-merge'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-merge)
$ git add fichier1.cpp
MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Modification sur master en haut"
On branch master
Your branch is up to date with 'origin/master'.

nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git merge test-merge
Already up to date.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ ^C

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git log --oneline --graph --all --decorate
*   f04b156 (HEAD -> master, origin/master, origin/HEAD, test-merge) Modification  du fichier1
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
| | | * 0f88acd Implement square calculation in main function
| | |/  
| | * efe61d7 
| | * 5a142f8 commit presque perdu
| | * 58061e7 Revert "feat: un commit temporaire pour le test"
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

## Par Rebase

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git checkout -b test-rebase
Switched to a new branch 'test-rebase'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-rebase)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-rebase)
$ git commit -m "Test de rebase - branche test-rebase"
On branch test-rebase
nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-rebase)
$ git switch master
Switched to branch 'master'
Your branch is up to date with 'origin/master'.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Autre modif sur master pour le rebase"
[master 213aa51] Autre modif sur master pour le rebase
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git switch test-rebase
Switched to branch 'test-rebase'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-rebase)
$ git rebase master
Successfully rebased and updated refs/heads/test-rebase.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (test-rebase)
$ git switch master
Switched to branch 'master'
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git merge test-rebase
Already up to date.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git log --oneline --graph --all --decorate
* 213aa51 (HEAD -> master, test-rebase) Autre modif sur master pour le rebase
*   f04b156 (origin/master, origin/HEAD, test-merge) Modification  du fichier1
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
| | | * 0f88acd Implement square calculation in main function
| | |/  
| | * efe61d7 
| | * 5a142f8 commit presque perdu
| | * 58061e7 Revert "feat: un commit temporaire pour le test"
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

## Comparaison

 **La fusion (git merge)** : Conserve une trace claire de la collaboration en parallèle (le graphe se sépare puis se rejoint).
Par contre Le rejeu (git rebase) : Réécrit l'historique pour donner l'impression que tout a été fait l'un après l'autre sur une 
ligne droite parfaite.

## En conclusion

 Entre ces deux approches, le graphe  de git merge est préférable car il respecte la vérité chronologique et la réalité 
 collaborative du projet en conservant des traces explicites du travail en parallèle, tandis que le rebase, bien qu'il produise 
 un historique parfaitement linéaire, réécrit la chronologie des intégrations et masque la complexité réelle du travail d'équipe.