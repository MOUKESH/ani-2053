# Exercice 11

il etait question pour nous de Committer volontairement un fichier de dix mégaoctets dans votre dépôt d'essai. Le Retirer au 
commit suivant, puis mesurer la taille de .git et conclure.

## Resultat

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ dd if=/dev/zero of=gros_fichier.bin bs=1M count=10
10+0 records in
10+0 records out
10485760 bytes (10 MB, 10 MiB) copied, 0.0070151 s, 1.5 GB/s

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git add gros_fichier.bin

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Ajout d'un gros fichier de 10 Mo"
[master 234cffc] Ajout d'un gros fichier de 10 Mo
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 gros_fichier.bin

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git rm gros_fichier.bin
rm 'gros_fichier.bin'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git commit -m "Suppression du gros fichier"
[master 3b5cf3c] Suppression du gros fichier
 1 file changed, 0 insertions(+), 0 deletions(-)
 delete mode 100644 gros_fichier.bin

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ du -sh .git
353K    .git

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ 

## Conclusion

Git n'oublie jamais rien par défaut. Lorsqu'on ajoute un fichier, il est stocké sous forme d'objet compressé dans la base de 
données interne de Git (.git/objects). Même si on supprime ce fichier dans un commit ultérieur, l'objet reste présent dans 
l'historique pour permettre de remonter le temps ou de restaurer le projet à n'importe quel état antérieur.