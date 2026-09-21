# Exercice 9

Le fichier du moteur nkentseu est NKDirectory.cpp et donc voici son histoire:

1. La création : Les fondations du module 
  La création du fichier NkDirectory.cpp répond au besoin fondamental du moteur nkentseu de manipuler le système de fichiers de manière autonome, sans dépendance à la STL et avec un contrôle total sur les performances.

   Son objectif initial est Fournir une API unifiée pour la création, la suppression et la vérification des répertoires, indépendamment de l'OS cible, en s'appuyant sur les primitives système (mkdir, rmdir, attributs de fichiers).

2. Les trois moments clés d'évolution 
On  peut diviser l'évolution du fichier en trois grandes étapes techniques visibles dans le code :

Moment 1 : L'unification multiplateforme 

 La mise en place de la compilation conditionnelle (#ifdef _WIN32 / #else) pour gérer les énumérations de dossiers via FindFirstFileA d'un côté et opendir/readdir de l'autre.

Moment 2 : Le passage critique à l'Unicode sous Windows (W-API)

 L'abandon des fonctions ANSI (FindFirstFileA) au profit des API larges UTF-16 (FindFirstFileW) combinées à WideCharToMultiByte.

Ce changement a été faite pour corriger un bug majeur où les caractères spéciaux ou hors de la page de code par défaut étaient mutilés (remplacés par des ?), provoquant la perte de fichiers lors des scans.

Moment 3 : L'ajout de l'intelligence algorithmique (Glob-matching & Corbeille)

L'implémentation manuelle de l'algorithme de filtrage par pattern (MatchesPattern avec gestion du backtracking pour * et ?) et l'intégration de la suppression sécurisée (MoveToTrash via SHFileOperationW sur Windows et les spécifications Freedesktop sur Linux/Unix).

3. Les raisons et motivations d'après les choix de conception 
Philosophie du code : Les commentaires du code montrent une volonté constante de robustesse et d'indépendance (zéro dépendance externe, gestion manuelle des cas limites comme les dossiers . et .., gestion de l'idempotence pour la création récursive).

Traçabilité : Les choix documentés directement dans les commentaires (comme les précisions sur les performances O(n*m) du matching ou la gestion du temps POSIX vs Windows FILETIME) témoignent d'une démarche d'ingénierie rigoureuse visant à stabiliser le système de fichiers du moteur.