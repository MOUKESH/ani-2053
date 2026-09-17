# Exercice 3

voici tous les commit:

## Commit

PS C:\Users\p\Desktop\cars> git log
commit 666709af5f78ebd8c68fc52010781cd2f3aff4bb (HEAD -> master)
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

PS C:\Users\p\Desktop\cars> 

## 2. Analyse des messages de commit
Analyse de trois commits de notre historique :
1. `ajout du fichier2` : il dit que j'ai ajouter le fichier2 dans le depot cars.
2. `ajout du fichier3` : il dit que j'ai ajouter le fichier3 dans le depot cars.
3. `le Fichier est modifié` : **Le plus faible.** Il est trop vague : on ne sait pas quel fichier a été modifié, ni ce qui a changé, ni pourquoi.

### Réécriture du commit le plus faible :
- **Ancien message :** `le Fichier est modifié`
- **Nouveau message proposé :** ` mise à jour du contenu descriptif du fichier1`
- ** preuve:** PS C:\Users\p\Desktop\cars> echo " mise à jour du contenu descriptif du fichier1" >> fichier1.cpp
PS C:\Users\p\Desktop\cars> git add fichier1.cpp                      
PS C:\Users\p\Desktop\cars> git status                                
On branch master           
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   fichier1.cpp

PS C:\Users\p\Desktop\cars> 