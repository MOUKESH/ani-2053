# Exercice 7 

il etait question pour nous que  Deux personnes modifient le même fichier, mais à deux endroits éloignés. Montrez que git assemble les deux sans rien demander.

# preuve
MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/demo/cars (master)
$ git add fichier1.cpp

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/demo/cars (master)
$ git commit -m "Modification en bas du fichier"
[master f1c42f3] Modification en bas du fichier
 1 file changed, 2 insertions(+)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/demo/cars (master)
$ git pull origin master
From https://github.com/MOUKESH/cars
 * branch            master     -> FETCH_HEAD
Already up to date.

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/demo/cars (master)
$ git push
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 12 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 389 bytes | 389.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 localobject.
To https://github.com/MOUKESH/cars.git
   c29409f..f1c42f3  master -> master

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/demo/cars (master)
$ 
