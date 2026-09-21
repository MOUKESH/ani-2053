# Exercice 12

## Regle Git du Projet — Équipe de 4 Étudiants

 Elle s'applique dès aujourd'hui pour garantir un historique propre, éviter les conflits bloquants et assurer une fluidité dans le développement.

1. Nommage des branches (git switch -c)
Pour éviter l'anarchie sur le dépôt distant, chaque fonctionnalité ou correction doit impérativement se faire sur une branche dédiée (jamais directement sur master).

**Fonctionnalités** : feature/nom-court 

**Corrections de bugs** : fix/nom-court 

**Tâches documentaires ou de test** : docs/nom-court 

**Règle d'or** : Le nom de la branche doit être explicite et écrit en minuscules, avec des tirets pour séparer les mots.

2. Contenu et structure d'un commit (git commit)
Un commit doit représenter une unité logique de travail cohérente et fonctionnelle.

**Taille** : Committez souvent, mais propre. Un commit ne doit pas regrouper 50 modifications sans rapport.

**Message de commit** : Utilisez un message clair, descriptif et orienté action (en français ou en anglais, mais de façon homogène).

**Exemple correct** : git commit -m "feat: ajout  de l'âge "

**Vérification préalable** : Toujours vérifier l'état du dépôt (git status) et s'assurer que le code compile / fonctionne avant de valider.

3. Revue de code : Qui relit quoi ?
La relecture (code review) garantit la qualité collective du code et prévient l'introduction de bugs sur la branche stable.

Organisation en binômes croisés : Les 4 membres de l'équipe sont divisés en deux binômes. Chaque membre relit obligatoirement les pull requests / branches de son binôme attitré avant l'intégration.

Points de vigilance lors de la relecture :

Présence de code mort ou de commentaires obsolètes.

Respect des conventions de nommage et propreté du code .

Absence de fichiers lourds, de fichiers binaires ou de données temporaires (comme vu lors de l'exercice sur la gestion des gros fichiers).

4. Ce qui est STRICTEMENT INTERDIT
Pour préserver la santé du dépôt et la paix dans l'équipe, les actions suivantes sont formellement proscrites :

- Interdit de commiter directement sur master : Toute modification passe par une branche de travail puis une validation.

- Interdit de commiter des fichiers lourds ou inutiles : Pas de fichiers binaires de plusieurs Mo, de caches de compilation (build/, .obj/), ni de fichiers de configuration personnelle (IDE). Utilisez un fichier .gitignore rigoureux.

- Interdit de faire un git push --force sur master : Ne réécrivez jamais l'historique de la branche principale partagée. Le rebase est réservé à vos branches locales individuelles avant fusion.

- Interdit de laisser un conflit non résolu : Si un conflit de fusion apparaît, il doit être nettoyé, testé et validé proprement (pas de balises de conflits <<<<<<, ======, >>>>>> laissées dans le code).

5. Procédure d'urgence : Que faire si quelqu'un casse master ?
Si un code cassé, non compilable ou corrompu est poussé par mégarde sur la branche principale, pas de panique, la règle de gestion de crise s'applique immédiatement :

**Alerter l'équipe** : Prévenez immédiatement les autres membres (via le canal de communication du groupe) pour que personne d'autre ne récupère un dépôt corrompu (git pull).

**Identifier le problème** : Utilisez l'historique visuel (git log --oneline --graph) pour identifier le commit fautif.

**Appliquer l'action corrective selon le cas** :

Option A (Propre et traçable) : Créer un commit correctif immédiat si le correctif est rapide.

Option B (Annulation ciblée) : Utiliser un git revert <hash-du-commit-fautif> pour annuler proprement l'effet du mauvais commit en créant un nouveau commit inverse (recommandé pour ne pas perdre l'historique).

Option C (Retour en arrière d'urgence en local si non poussé) : Si l'erreur vient d'être commise en local, un git reset --soft ou mixed peut isoler le problème, mais si le commit est déjà sur le serveur partagé, le revert (Option B) reste la solution la plus sûre pour l'équipe.