# Exercice 2

j'ai modiifié le contenu du fichier1.cpp et voici le resultat:

## Resultats

PS C:\Users\p\Desktop\cars> echo "int main(){ return 0; }" >> fichier1.cpp
PS C:\Users\p\Desktop\cars> git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   fichier1.cpp

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\p\Desktop\cars> git add fichier1.cpp
PS C:\Users\p\Desktop\cars> git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   fichier1.cpp

PS C:\Users\p\Desktop\cars> git commit -m "le Fichier est modifié"
[master 666709a] le Fichier est modifié
 1 file changed, 0 insertions(+), 0 deletions(-)
PS C:\Users\p\Desktop\cars> git status
On branch master
nothing to commit, working tree clean
PS C:\Users\p\Desktop\cars> 

## Ce qui change entre elles

- Première sortie (git status après modification) : Le fichier est en rouge. Il est uniquement présent dans le répertoire de travail. Git signale un changement non préparé.
- Deuxième sortie (git status après git add) : Le fichier devient vert. Il a basculé dans l'index, ce qui signifie qu'il est validé pour entrer dans le prochain commit.
- Troisième sortie (git status après git commit) : Le statut devient vide / propre . Le fichier a quitté la zone d'attente pour être inscrit définitivement dans l'historique du dépôt.