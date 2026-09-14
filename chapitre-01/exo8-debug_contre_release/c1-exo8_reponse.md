# Exercice 8

J'ai construit l'ensemble du workspace `Nkentseu` dans les deux configurations demandées, Debug et Release. Après chaque 
construction, j'ai relevé la taille du binaire `MonEssai.exe`.

En configuration **Debug**, la construction complète de `Nkentseu` a duré **18 secondes**. Le binaire `MonEssai.exe` avait une 
taille de **0,13 Mo**.

En configuration **Release**, la construction complète de `Nkentseu` a duré **2 minutes et 13 secondes**. Le binaire `MonEssai.
exe` avait également une taille de **0,13 Mo**.

La construction en Release a donc été beaucoup plus longue que celle en Debug, avec une différence de **1 minute et 55 
secondes**. Cette différence concerne la construction de l'ensemble du workspace : le passage à Release a entraîné une 
reconstruction plus importante des projets de `Nkentseu`.

Par contre, la taille du binaire `MonEssai.exe` est restée identique dans les deux configurations, avec **0,13 Mo**. Comme 
`MonEssai` est un programme très simple, les différences entre les configurations ne se traduisent pas nécessairement par une 
différence de taille visible sur son exécutable.
