
# Exercice 2
J'ai compté les fichiers source du dépôt Nkentseu en excluant le dossier Externals.

1 197 fichiers .cpp
3 fichiers .c
1 465 fichiers .h
4 fichiers .hpp

Pour comparer avec les chiffres du chapitre, qui indiquent uniquement les fichiers .cpp et .h, j'ai donc retenu :

2 662 fichiers .cpp + .h
1 117 545 lignes de code dans ces fichiers.

Le chapitre 1 indique :

2 641 fichiers .cpp + .h
1 193 385 lignes de code

La différence est donc de :

+21 fichiers dans mon comptage ;
−75 840 lignes par rapport au chapitre.
Vérification des éléments pouvant expliquer la différence
En-têtes : oui. Les fichiers .h ont été comptés, conformément à la comparaison avec le chiffre du chapitre. Les .hpp n'ont pas été inclus dans les 2 662 fichiers de comparaison.
Dossier Build : non. Aucun dossier nommé Build n'a été trouvé dans le dépôt.
Fichiers de test : oui, ils sont présents dans le dépôt. J'ai trouvé 166 fichiers dont le nom contient test, hors du dossier Externals. Ils n'ont donc pas été retirés automatiquement du comptage des fichiers source.

Les chiffres obtenus sont différents de ceux du chapitre. Le dépôt a probablement évolué depuis le moment où les chiffres du chapitre ont été établis, et le périmètre exact utilisé pour le comptage du chapitre n'est pas précisé dans l'énoncé. Les différences ne peuvent donc pas être attribuées avec certitude à un seul élément.