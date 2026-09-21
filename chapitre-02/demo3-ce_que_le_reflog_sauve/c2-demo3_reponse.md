# Demo 3

## Preuve

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git add tom.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Ajout du travail important"
[master ec40466] Ajout du travail important
 1 file changed, 9 insertions(+)
 create mode 100644 tom.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git reset --hard HEAD~1
HEAD is now at 3b5cf3c Suppression du gros fichier

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ ls
fichier1.cpp  fichier2.txt  fichier3.md

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git log
commit 3b5cf3cbc335ae93df0c643adfdea7be616d8f71 (HEAD -> master)
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 12:08:37 2026 +0100

    Suppression du gros fichier

commit 234cffc62423e0c20d81f26cc3c9d9fd170f9f8b
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 12:07:49 2026 +0100

    Ajout d'un gros fichier de 10 Mo

commit 213aa510ff884ad9fdf11187b0101f45f09fa1ee (test-rebase)
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 11:57:05 2026 +0100

    Autre modif sur master pour le rebase

commit f04b1565fcc611b00181434731cb95a9ef7c0f5d (origin/master, origin/HEAD, test-merge)
Merge: 04683f2 f1c42f3
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 11:12:25 2026 +0100

    Modification  du fichier1

commit 04683f2edfceee5c1a2c73c06c0146e86b25720b
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 11:10:03 2026 +0100

    Modification en bas du fichier1

commit f1c42f35d399b91078d7be65997a5d4e02e56600
Author: Moukesh <moukekasofo@gmail.com>
Date:   Mon Sep 21 10:53:22 2026 +0100

    Modification en bas du fichier

commit c29409f1d84edea624ac0bc3707aacb14d4e960c
Author: MOUKESH <moukekasofo@gmail.com>
Date:   Thu Sep 17 22:51:02 2026 +0100

    Update output message in fichier1.cpp

commit 6281482c705caefe47521ae3a63c2f3c53a02e59
Author: MOUKESH <moukekasofo@gmail.com>
Date:   Thu Sep 17 22:48:39 2026 +0100

    Add version message to main function
    
    modification du contenu

commit 8beceb7f27e421db24617388113a834e57dbc143
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 13:43:23 2026 +0100

    Deuxieme modification

commit 9051945d84e0b294db35b900811e4bec2ac4d9a8
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 13:42:39 2026 +0100

    Premiere modification

commit 992a3ff000d16938f5d36941096743779a8f825b
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 13:36:19 2026 +0100

    Prépare fichier3 pour git add -p

commit dd5dbcebbaba6f14aced8fe06eb43a957aee2676
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 12:50:14 2026 +0100

    Convert fichier3.md en texte

commit b26b03a554e685cee3f4a4ee463bd15eb1972542
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 12:07:24 2026 +0100

commit aa37265ce25cde2730fa3a7a8cc1db6b4e0913c2
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 10:34:35 2026 +0100

commit 36b9049b62cc1c0e2deb3e63a7bd579279b02dfe
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 10:24:54 2026 +0100

    mise à jour du contenu descriptif du fichier1

commit 666709af5f78ebd8c68fc52010781cd2f3aff4bb
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 09:41:53 2026 +0100

    le Fichier est modifié

commit 8f3171d38367f4786c1c275638f77903a5120e56
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 09:24:40 2026 +0100

    ajout du fichier3

commit e557a18add9391a489de4f8de45167d3825444ff
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 09:23:26 2026 +0100

    ajout du fichier2

commit c3988abb27c2991995853828bf93f6a4c4605acf
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 09:20:37 2026 +0100

    ajout du fichier1

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git reflog
3b5cf3c (HEAD -> master) HEAD@{0}: reset: moving to HEAD~1
ec40466 HEAD@{1}: commit: Ajout du travail important
3b5cf3c (HEAD -> master) HEAD@{2}: commit: Suppression du gros fichier
234cffc HEAD@{3}: commit: Ajout d'un gros fichier de 10 Mo
213aa51 (test-rebase) HEAD@{4}: checkout: moving from test-rebase to master
213aa51 (test-rebase) HEAD@{5}: rebase (finish): returning to refs/heads/test-rebase
213aa51 (test-rebase) HEAD@{6}: rebase (start): checkout master
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{7}: checkout: moving from master to test-rebase
213aa51 (test-rebase) HEAD@{8}: commit: Autre modif sur master pour le rebase
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{9}: checkout: moving from test-rebase to master
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{10}: checkout: moving from master to test-rebase
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{11}: checkout: moving from test-merge to master
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{12}: checkout: moving from master to test-merge
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{13}: reset: moving to HEAD
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{14}: checkout: moving from twoseven to master
5df8b59 (twoseven) HEAD@{15}: checkout: moving from master to twoseven
f04b156 (origin/master, origin/HEAD, test-merge) HEAD@{16}: commit (merge): Modification du fichier1
04683f2 HEAD@{17}: commit: Modification en bas du fichier1
8beceb7 HEAD@{18}: checkout: moving from twoseven to master
5df8b59 (twoseven) HEAD@{19}: commit: Modification en bas du fichier
a9af426 HEAD@{20}: reset: moving to HEAD
a9af426 HEAD@{21}: commit: Test fusion endroits eloignes
fd507ca HEAD@{22}: reset: moving to HEAD
fd507ca HEAD@{23}: commit: Vraie modification en bas du fichier
86e7b6d HEAD@{24}: reset: moving to HEAD
86e7b6d HEAD@{25}: commit: Modification en bas du fichier
e24a93f HEAD@{26}: reset: moving to HEAD
e24a93f HEAD@{27}: commit: Enhance output with result display comment
e4ee7a2 HEAD@{28}: commit: Implement square calculation in main function
efe61d7 HEAD@{29}: commit:
5a142f8 HEAD@{30}: reset: moving to HEAD@{1}
58061e7 HEAD@{31}: reset: moving to HEAD~1
5a142f8 HEAD@{32}: commit: commit presque perdu
58061e7 HEAD@{33}: reset: moving to HEAD
58061e7 HEAD@{34}: revert: Revert "feat: un commit temporaire pour le test"
8de73e2 HEAD@{35}: commit: feat: un commit temporaire pour le test
b5951eb HEAD@{36}: reset: moving to HEAD~1
f832f92 HEAD@{37}: commit: commit de trop
b5951eb HEAD@{38}: commit:
8937c1e HEAD@{39}: commit (merge): fix: résolution du conflit sur fichier1.cpp
2326ce3 HEAD@{40}: commit: feat: ma modification locale en attente
da602c7 HEAD@{41}: pull origin twoseven: Fast-forward
90abc2b HEAD@{42}: commit: feat: modification locale pour conflit
95e0e70 HEAD@{43}: pull origin twoseven: Fast-forward
6ff030a HEAD@{44}: commit: Modification locale de la ligne4
b09ca33 HEAD@{45}: commit: troisieme modification dans le fichier1.cpp
5a54d75 HEAD@{46}: commit: deuxieme modification dans le fichier1.cpp
5e6e51e HEAD@{47}: commit: ma premiere modification
8beceb7 HEAD@{48}: checkout: moving from master to twoseven
8beceb7 HEAD@{49}: commit: Deuxieme modification
9051945 HEAD@{50}: commit: Premiere modification
992a3ff HEAD@{51}: commit: Prépare fichier3 pour git add -p
dd5dbce HEAD@{52}: commit: Convert fichier3.md en texte
b26b03a HEAD@{53}: commit:
aa37265 HEAD@{54}: commit:
36b9049 HEAD@{55}: commit: mise à jour du contenu descriptif du fichier1
666709a HEAD@{56}: commit: le Fichier est modifié
8f3171d HEAD@{57}: commit: ajout du fichier3
e557a18 HEAD@{58}: commit: ajout du fichier2
c3988ab HEAD@{59}: commit (initial): ajout du fichier1

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git checkout -b recuperation a1b2c3d
fatal: 'a1b2c3d' is not a commit and a branch 'recuperation' cannot be created from it

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git reset --hard ec40466
HEAD is now at ec40466 Ajout du travail important



## Explication :
Cet exercice démontre la robustesse et la "sécurité cachée" de Git. Un git reset --hard est une commande destructive pour 
l'espace de travail et l'index, car elle supprime brutalement les modifications non commitées ou les derniers commits de la 
branche.

Cependant, Git ne supprime jamais immédiatement les objets de sa base de données interne. Le git reflog (reference log) 
enregistre chaque déplacement de pointeur (HEAD), agissant comme une boîte noire du dépôt. Tant que la base de données n'a pas 
été nettoyée par un ramasse-miettes (git gc), il est pratiquement impossible de perdre définitivement du code sous Git.
