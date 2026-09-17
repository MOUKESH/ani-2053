# Exercice 5

l'esrcice constait à Créer une branche, faire trois commits dessus, et mesurer la place 
que le dépôt a gagnée sur le disque. 

## Resultats

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git branch twoseven

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (master)
$ git switch twoseven
Switched to branch 'twoseven'

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git branch
  master
* twoseven

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add .

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "ma premiere modification"
[twoseven 5e6e51e] ma premiere modification
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add .

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "deuxieme modification dans le fichier1.cpp"
[twoseven 5a54d75] deuxieme modification dans le fichier1.cpp
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git add .

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ git commit -m "troisieme modification dans le fichier1.cpp"
[twoseven b09ca33] troisieme modification dans le fichier1.cpp
 1 file changed, 0 insertions(+), 0 deletions(-)

MOUKESH 27@DESKTOP-H5PSQIJ MINGW64 ~/Desktop/cars (twoseven)
$ du -sh .git
134K    .git


## Explication

* Le Résultat de la mesure (`du -sh .git`) nous montre que le dossier `.git` occupe une 
taille extrêmement faible qui est ici 134Ko.
* **Explication :** 
  1. **Une branche n'est qu'un pointeur :** Créer une branche ne duplique pas les 
  fichiers du projet. Git crée simplement un fichier de référence léger  qui pointe 
  vers le dernier commit.
  2. **Stockage successif des commits :** Chaque commit n'enregistre que les les 
  modifications différentielles ou les nouveaux objets compressés dans le dossier `.git/
  objects`. 
  3. **Conclusion :** Le système de gestion de versions de Git est conçu pour être 
  extrêmement léger et performant, ce qui explique pourquoi l'ajout de plusieurs 
  commits et d'une nouvelle branche n'impacte presque pas l'espace disque.