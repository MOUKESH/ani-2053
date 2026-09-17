# Exercice 1

j'ai creer le depot vide et j'ai inséré le trois fichiers à l'aide des commande git. 

## Resultats

PS C:\Users\p\Desktop\cars> git init
Initialized empty Git repository in C:/Users/p/Desktop/cars/.git/
PS C:\Users\p\Desktop\cars> echo "Premier fichier" > fichier1.cpp
PS C:\Users\p\Desktop\cars> git add fichier1.cpp
PS C:\Users\p\Desktop\cars> git commit -m "ajout du fichier1"     
[master (root-commit) c3988ab] ajout du fichier1
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 fichier1.cpp
PS C:\Users\p\Desktop\cars> echo "Deuxieme fichier" > fichier2.cpp
PS C:\Users\p\Desktop\cars> git add fichier2.cpp                  
PS C:\Users\p\Desktop\cars> git commit -m "ajout du fichier2"     
[master e557a18] ajout du fichier2
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 fichier2.cpp
PS C:\Users\p\Desktop\cars> echo "Deuxieme fichier" > fichier3.md 
PS C:\Users\p\Desktop\cars> git add fichier3.md                  
PS C:\Users\p\Desktop\cars> git commit -m "ajout du fichier3"    
[master 8f3171d] ajout du fichier3
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 fichier3.md
PS C:\Users\p\Desktop\cars> git log --oneline --graph --all
* 8f3171d (HEAD -> master) ajout du fichier3
* e557a18 ajout du fichier2
* c3988ab ajout du fichier1
PS C:\Users\p\Desktop\cars> 