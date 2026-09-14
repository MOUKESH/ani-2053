# Excerci 7

La première construction complète du workspace `Nkentseu` a duré **1 min 52 s**. J'ai ensuite relancé exactement la même 
construction, sans modifier aucun fichier, et la deuxième construction a duré **25 s**.

La différence de temps s'explique du faite que lors de la première construction, Jenga devait effectuer les compilations 
nécessaires et générer les résultats de construction. Lors de la deuxième, comme aucun fichier n'avait été modifié depuis la 
première construction, Jenga a pu détecter que les éléments déjà construits étaient toujours à jour et éviter de refaire 
inutilement une grande partie du travail.
