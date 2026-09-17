# Exercice 4

L'exercice consistait à Modifie deux choses sans rapport dans le même fichier, puis 
 séparer avec git add -p. Vérifier dans l'historique que chacun ne contient que son 
 sujet.

 ## Resultats

 MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git status
On branch master
Your branch is ahead of 'origin/master' by 2 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ sed -i '2s/Ligne 2/Premiere modification/' fichier3.md

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ sed -i '9s/Ligne 9/Deuxieme modification/' fichier3.md

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git diff -- fichier3.md
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
diff --git a/fichier3.md b/fichier3.md
index ac16102..1656c6b 100644
--- a/fichier3.md
+++ b/fichier3.md
@@ -1,10 +1,10 @@
 Ligne 1
-Ligne 2
+Premiere modification
 Ligne 3
 Ligne 4
 Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
-Ligne 9
+Deuxieme modification
 Ligne 10

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git add -p fichier3.md
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
diff --git a/fichier3.md b/fichier3.md
index ac16102..1656c6b 100644
--- a/fichier3.md
+++ b/fichier3.md
@@ -1,10 +1,10 @@
 Ligne 1
-Ligne 2
+Premiere modification
 Ligne 3
 Ligne 4
 Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
-Ligne 9
+Deuxieme modification
 Ligne 10
(1/1) Stage this hunk [y,n,q,a,d,s,e,p,P,?]? s
Split into 2 hunks.
@@ -1,8 +1,8 @@
 Ligne 1
-Ligne 2
+Premiere modification
 Ligne 3
 Ligne 4
 Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
(1/2) Stage this hunk [y,n,q,a,d,k,K,j,J,g,/,e,p,P,?]? y
@@ -3,8 +3,8 @@
 Ligne 3
 Ligne 4
 Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
-Ligne 9
+Deuxieme modification
 Ligne 10
(2/2) Stage this hunk [y,n,q,a,d,K,J,g,/,e,p,P,?]? n


MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git diff --cached
diff --git a/fichier3.md b/fichier3.md
index ac16102..597f126 100644
--- a/fichier3.md
+++ b/fichier3.md
@@ -1,5 +1,5 @@
 Ligne 1
-Ligne 2
+Premiere modification
 Ligne 3
 Ligne 4
 Ligne 5

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git diff
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
diff --git a/fichier3.md b/fichier3.md
index 597f126..1656c6b 100644
--- a/fichier3.md
+++ b/fichier3.md
@@ -6,5 +6,5 @@ Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
-Ligne 9
+Deuxieme modification
 Ligne 10

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Premiere modification"
[master 9051945] Premiere modification
 1 file changed, 1 insertion(+), 1 deletion(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git add -p fichier3.md
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
warning: in the working copy of 'fichier3.md', LF will be replaced by CRLF the next time Git touches it
diff --git a/fichier3.md b/fichier3.md
index 597f126..1656c6b 100644
--- a/fichier3.md
+++ b/fichier3.md
@@ -6,5 +6,5 @@ Ligne 5
 Ligne 6
 Ligne 7
 Ligne 8
-Ligne 9
+Deuxieme modification
 Ligne 10
(1/1) Stage this hunk [y,n,q,a,d,e,p,P,?]? y


MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Deuxieme modification"
[master 8beceb7] Deuxieme modification
 1 file changed, 1 insertion(+), 1 deletion(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git log --oneline -3
8beceb7 (HEAD -> master) Deuxieme modification
9051945 Premiere modification
992a3ff Prépare fichier3 pour git add -p

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git show --stat HEAD
commit 8beceb7f27e421db24617388113a834e57dbc143 (HEAD -> master)
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 13:43:23 2026 +0100

    Deuxieme modification

 fichier3.md | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git show --stat HEAD~1
commit 9051945d84e0b294db35b900811e4bec2ac4d9a8
Author: Moukesh <moukekasofo@gmail.com>
Date:   Thu Sep 17 13:42:39 2026 +0100

    Premiere modification

 fichier3.md | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ 
