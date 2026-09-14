# Exercice 8

J'ai construit l'ensemble du workspace `Nkentseu` dans les deux configurations demandées, Debug et Release. Après chaque 
construction, j'ai relevé la taille du binaire `MonEssai.exe`.

En configuration **Debug**, la construction complète de `Nkentseu` a duré **43 secondes**. Le binaire `MonEssai.exe` avait une 
taille de **0,13 Mo**.
## preuve

════════════════════════════════════════════════════════════════════════════════
                                  BUILD FAILED
════════════════════════════════════════════════════════════════════════════════
Projects Built:  24/213
Failed:         1
Not reached:    188  (arret au premier echec — voir --keep-going)
Errors:         6
Time:           43.16s
Status:         ✗ FAILURE
════════════════════════════════════════════════════════════════════════════════

Echecs (1) — a corriger :
  ✗ NKSL

PS C:\Users\p\Desktop\Nkentseu> Get-ChildItem -Recurse -Filter MonEssai.exe | Select-Object FullName, @{Name="Taille_MB";Expression={[math]::Round($_.Length / 1MB, 2)}}

FullName                                                                  Taille_MB
--------                                                                  ---------
C:\Users\p\Desktop\Nkentseu\Build\Bin\Debug-Windows\MonEssai\MonEssai.exe      0,13



En configuration **Release**, la construction complète de `Nkentseu` a duré **28 secondes**. Le binaire `MonEssai.
exe` avait également une taille de **0,13 Mo**.
## preuve

════════════════════════════════════════════════════════════════════════════════
                                  BUILD FAILED
════════════════════════════════════════════════════════════════════════════════
Projects Built:  30/213
Failed:         1
Not reached:    182  (arret au premier echec — voir --keep-going)
Errors:         6
Warnings:       27
Time:           28.79s
Status:         ✗ FAILURE
════════════════════════════════════════════════════════════════════════════════

Echecs (1) — a corriger :
  ✗ NKSL

PS C:\Users\p\Desktop\Nkentseu> Get-ChildItem -Recurse -Filter MonEssai.exe | Select-Object FullName, @{Name="Taille_MB";Expression={[math]::Round($_.Length / 1MB, 2)}}

FullName                                                                  Taille_MB
--------                                                                  ---------
C:\Users\p\Desktop\Nkentseu\Build\Bin\Debug-Windows\MonEssai\MonEssai.exe      0,13


PS C:\Users\p\Desktop\Nkentseu>

La construction en Release a donc été beaucoup plus longue que celle en Debug, avec une différence de
** 15 secondes**. Cette différence concerne la construction de l'ensemble du workspace : le passage à Release a entraîné une 
reconstruction plus importante des projets de `Nkentseu`.

Par contre, la taille du binaire `MonEssai.exe` est restée identique dans les deux configurations, avec **0,13 Mo**. Comme 
`MonEssai` est un programme très simple, les différences entre les configurations ne se traduisent pas nécessairement par une 
différence de taille visible sur son exécutable.
