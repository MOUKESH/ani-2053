# Exercice 9

il etait question pour nous de Choisir un fichier du moteur et lire son histoire complète. Reconstituer : sa création, les trois moments où 
il a le plus changé, et ce que les messages disent des raisons.

## Preuve
C:\Users\p\Desktop\Nkentseu>git log --oneline -- Nkentseu.jenga
addf709d NKCode beta.8 a beta.11 : la ligne publiee rejoint enfin main (#86)
cc41ca45 GemCrush : le jeu complet -- menu, aventure 30 niveaux, 3 modes, audio synthetise (#84)
849a7e5e NK3DModeler : changer le type de materiau REINITIALISE tout (regle, pas liste) -- table de defauts par type, textures videes, plus banc console NKMatTypeResetTest dont le controle de couverture rend rouge tout champ ajoute sans entree
938fbd7e Merge branch 'feat/nkref'
6f1acdf4 NKEditorKit: theme et rendu de canvas, plus banc NKEditorKitTest
133da0b0 NkUIDesign : la tranche verticale — la declaration est LUE, pas seulement ecrite (21/21) (#83)
42d65c23 NKGui : completer la bibliotheque -- 4 primitives, 16 jetons, un theme qui s'enumere, banc temoin 46/46 sans GPU (#81)
1a924a25 NK3DModeler : eclatement des imports, persistance de l origine, mode objet, L (#67)
3bf761d7 NKRenderer : FBX operationnel (squelette, skinning, animations), journal introuvable/invalide (#70)
332ae4f8 NK3DModeler : refonte d'interface, import OBJ, selection liee et mode objet (#62)
964b3779 NKAnimation : le substrat d animation quitte le renderer
d9e1f82d NKAnimPhysics : extraire la pose physiquement correcte hors du renderer
570ebf73 NKARDemo : la realite augmentee de bout en bout — camera, marqueur, objet ancre
68909d3e NkRef etape 0: canevas infini nu — pan (clic milieu / espace+glisser), zoom molette CENTRE SOUS LE CURSEUR (NkRefView pur, ancre invariante), grille adaptative puissances de 2, axes origine, Home=reset + crochets agent NK_AGENT_SHOT/EXIT/PAN/ZOOM (memes methodes que la souris) — verifie par captures: zoom ancre exact, pan exact, rendu deterministe (hashes identiques)
0702b028 NKXR etage 0 : runtime XR from scratch + simulateur desktop + demo stereo
232d0e88 NKAI : Re-Basin sur transformeur -- le flux residuel est le verrou, pas les tetes
d1be221c NKAI : bloc transformeur moderne (RMSNorm + RoPE + SwiGLU) -- il sur-apprend une sequence
4c4988fc NKAI : Ilyana -- corpus d'identite, tri en trois bacs, tokenizer pre-entraine
3d62058e NKAI : un BPE qui tient l'echelle -- 16k fusions sur 25 Mo en 1,6 s
a763a97f NKAI : deux reseaux entraines separement, alignes par permutation
7624a19e NKAI : entrainement LoRA reprenable, et dialogue avec le modele affine
3c44a374 feat(nkcode): lecteur PDF + portage Linux (XLib/XCB) + restauration des fenetres (#55)
34f8decd NK3DModeler : squelette d'application -- la coquille tourne
89eb9cab Harnais de non-regression de NkEditMesh (prealable a la refonte BMesh)
ca0bca7d feat(editmode): bevel, inset, edge split, spin, dissolve + enregistrement des apps NKAI manquantes
e562239a chore: consolidation des livraisons verifiees 23-25/07
7d33a3f7 feat(nkcode): Jenga in-process via CPython embarque (Phase 12, Windows) (#49)
e455ee91 fix: retire l'inclusion accidentelle de WIP d'autres agents dans 91a36ee4 (Mou.jenga, Nkentseu.jenga, config/modules.jenga, NkTextRenderer.cpp/h, NkDialogs.cpp) - ce n'etait pas mon travail, le stash 'WIP autres agents' les conserve intacts pour la reprise
91a36ee4 docs(nkmedia): ROADMAP a jour - PCM + MP3 embarque dans MP4 (commit 805e0c93)
ebaf97ed feat(app): NkAudioPlayer - lecteur audio de REFERENCE (patron NKAudio propre, liftable dans NKCode). AudioEngine::Initialize (device WASAPI/CoreAudio/ALSA via backend AUTO, multi-plateforme) + AudioLoader::Load (WAV/MP3/OGG/FLAC/Opus) + Play (bus Music) + suivi position/IsPlaying + Shutdown. Le moteur convertit le taux du fichier vers le device (fix cdba6d5c) -> le lecteur n'a RIEN a faire cote resampling. --maxsec pour borner. link avrt (WASAPI).
3f0dad67 feat(nkmedia): NkVideoReader - LECTURE video (NKMedia savait seulement encoder). Demuxeur AVI + decode MJPEG frame-par-frame via le decodeur JPEG NKImage (+ RGB brut DIB bottom-up). API unifiee Open/Info/ReadFrame->RGBA8/SeekFrame. Valide: self-test (ecrit AVI MJPEG via NkVideoWriter -> relit -> verifie) + INTEROP lit un AVI MJPEG ffmpeg (160x120, 10 frames). App NkVideoReadTest. MOV/MP4-MJPEG + H264 = iterations suivantes.
fe840d51 feat(nktts): PISTE 2 etape 1 - chargeur LJSpeech operationnel (NKTTSTrain). Lecteur WAV PCM16 maison + parse metadata.csv (texte<->WAV) + mel-spectrogramme 80 bandes via NkAudioFeatures (FFT radix-2). 13100 WAV valides, 5/5 charges bout-en-bout (9.66s -> 966 trames x 80). Fondation vers un modele TTS acoustique appris sur vraie voix.
e76c1f1f feat(nkimage): NkDeflate::Compress - VRAI deflate (LZ77 chaines de hash + Huffman FIXE, RFC 1951) au lieu de blocs STORED (aucune compression). PNG passe de 787 Ko a 6 Ko (129x) en restant BIT-EXACT (verifie ffmpeg). + NKImageCodecTest : round-trip de tous les codecs verifie via ffmpeg (PNG/BMP/TGA/QOI/PPM/HDR bit-exacts ; GIF/WEBP encode = non implementes)
66e0f2c2 feat(nkai): ASR acoustique from-scratch (Option B.1) - NkASRModel BiGRU+CTC (header-only NKSpeech) sur MFCC ; NKASRTest bout-en-bout (audio synthetique 3 tons -> MFCC -> BiGRU -> CTC -> decodage glouton) : perte 51.7->0.01, 4/4 mots transcrits ; capitalise sur A.1 (scheduler LR) + A.2 (GRU/CTC)
beb4afb7 feat(nkai): cellules recurrentes GRU/LSTM (NKNN) + perte CTC (NKAutograd) - forward-backward log-space gradient-checke (5e-5), op Concat0 pour empiler le temps ; NKRnnCtcTest entraine GRU+CTC (perte 5.46->0.0003, decodage glouton = cible) ; NKAutogradTest 32/32
e03896f0 feat(nknetwork): couche Replication livree (NkNetWorld agnostique ECS : snapshots delta+keyframe, spawn/despawn, inputs dedup, NkNetInterpolator) + HTTPS reel (SendOverTLS mbedTLS opt-in NK_ENABLE_TLS, valide 200 sur example.com) + fix wire NkLobbyMessageHeader kSize 12->16 + SandboxNKNetwork (67 checks dont loopback 127.0.0.1) ; ROADMAP a jour
889ddda2 feat(nkmedia): creation video from-scratch (SANS ffmpeg) - NkVideoWriter + AVI (MJPEG/RAW)
17193a69 feat(nkmedia): harnais validation Opus NKOpusRef - decode clip (demux->TOC->NkCeltDecoder) vs reference ffmpeg 48k, metriques RMS/correlation. Front-end VALIDE : 118080 echantillons = pile ffmpeg (alignement trames exact). Filet pour porter quant_all_bands
d6795b5a feat(nkmedia): nouveau module NKMedia - brique 1 NkMediaProbe (demux d'en-tete ISOBMFF/MP4 + EBML/WebM from-scratch) ; identifie conteneur+codec+params. Valide sur corpus reel (Bassa->MP4/AAC, ghomala->WebM/Opus). ROADMAP conteneurs/codecs staged
018df48e feat(nkspeech): NKSpeechFeatureDemo - MFCC sur fichier audio reel (decode NKAudio -> features) ; valide la chaine parole->MFCC sur le corpus (Bassa/ghomala). Note format corpus WebM/MP4 a transcoder
86231d8e feat(nkspeech): brique 1 Phase 8 - NkAudioFeatures MFCC/log-Mel from-scratch (FFT radix-2 + filtres Mel + DCT + deltas), module NKSpeech + NKSpeechTest 1/1 (sinus 1kHz -> bon canal Mel)
458eea7f feat(nkaudio): NkMicRecord - outil micro->WAV (test reel de NkAudioCapture, WASAPI), enregistre N s en WAV 16-bit PCM
1c65f410 feat(nkanima M3.1): distribution de masse + centre de masse (COM) de pose
824530f0 refactor(nkai): module NKGpt reutilisable — extraction des briques BPE + corpus + checkpoint de NKGptTrain vers Kernel/AI/NKGpt (lib statique, namespace nkentseu::ai::gpt) ; main.cpp 649->367 lignes ; utilisable par n'importe quelle app. Etape 1/2 (NkGptTrainer class = etape 2). Build 25/25 OK, comportement identique
1184efbb feat(nkai): NKMeshAITest — etape 1 modelisation par IA (imitation) : NkEditMesh->features->MLP predit l'action ; 98.8% sur test (from-scratch, petite echelle)
f02ca2f0 chore(songoo): desactive du build (migration NKCanvas a finir) — source preservee dans main
b17a1f76 feat(nkai): app NKGptTrain (entrainement GPT) + workspace jenga
54b949da Consolidation travaux parallèles : NKAI (transformer/GPT + entraînement GPU-résident), rasterizer Software, NKCode, éditeur maillage (#23)
ba3b0507 feat(editor): editeur de maillage facon Blender + structure n-gon half-edge (NkEditMesh) (#21)
d4fce7ee feat(render): grille infinie reutilisable + fix ombres GL (glClipControl/clipZ01) + fix freeze DX11 (ResizeBuffers/command list) + NkInput cross-platform + cap FPS/vsync + pool object-UBO dynamique + ombres instanciees ; consolidation WIP multi-modules (NKCode, Noge, ...) (#19)
137eefc4 feat(nkphysics): M0 — integration semi-implicite + boucle Step (gravite/damping, delegation detection NKCollision, sync shapes) ; NkPhysicsWorld CreateBody/Step + masse/inertie ; module enregistre ; self-test 4/4 (chute libre)
3240b1ae feat(moteur): reconciliation NKRenderer complete + NkAnima (supersede #14) (#16)
eaaad92b feat(nkcode): IDE NKCode (launcher + outillage) porte sur main (#12)
8f7cde3c feat(integrations): backends ImGui (NKCanvas + NKRHI) + NKUI (NKRHI) decouples + .jenga externes (#6)
15156667 chore(runtime): audit NKMemory complet + fix portabilite NkHash LP64 (#5)
f19260db chore: snapshot etat complet — reorg sources NKSL + Nkoung (plateforme de jeux 2D: toolkit responsive + Laser Puzzle + Labyrinthe) + Kernel/AI & Kernel/Bare (scaffolds docs) + wiki Foundation + scripts git/.gitattributes
1f26ef96 ﻿Session 2026-05-29 — D-NkImage, Android APK restauré, Harmony compile
bcc7c99d update
d557314e update
52dbc593 update renderer system and pong game
f1e536a5 refactor 001
8737e282 Begin clearing and restructured file
7660304a Bug fixe
9c90ccc4 bug fix
9c49f79f bug fix vulkan opengl dx11 current bug software and dx12
5d90c862 bugfix
f909152c Align Wayland jenga links/tests (renderer/camera/sandbox)
6760d538 update architecture
a41122c3 Restructure workspace: per-project jenga files + NKMath/NKTime/NKStream/NKMemory/NKRenderer
453f53a8 Rename NKWindow.jenga → Nkentseu.jenga, update workspace name


# Historique du fichier `Nkentseu.jenga`

J'ai choisi d'étudier le fichier `Nkentseu.jenga`, qui contient la configuration principale du workspace du moteur Nkentseu. Son historique Git permet de suivre l'évolution de l'organisation du projet et de ses différents composants.

## 1. Création du fichier

L'origine du fichier remonte au commit `453f53a8`, intitulé **« Rename NKWindow.jenga → Nkentseu.jenga, update workspace name »**. Cette modification correspond au changement de nom de l'ancien fichier `NKWindow.jenga` vers `Nkentseu.jenga`. Le message indique également que le nom du workspace a été mis à jour. Cette étape marque donc la mise en place du fichier sous son nom actuel et son adaptation à l'identité du moteur Nkentseu.

## 2. Première évolution importante : réorganisation du workspace

Un changement majeur apparaît ensuite avec le commit `a41122c3`, intitulé **« Restructure workspace: per-project jenga files + NKMath/NKTime/NKStream/NKMemory/NKRenderer »**.

Cette modification réorganise profondément la structure du workspace. Les fichiers `.jenga` sont répartis par projet et plusieurs composants importants du moteur sont intégrés ou réorganisés, notamment `NKMath`, `NKTime`, `NKStream`, `NKMemory` et `NKRenderer`. Le message du commit montre que cette évolution avait pour objectif de mieux structurer le workspace et ses modules.

## 3. Deuxième évolution importante : consolidation du projet

Un autre moment important apparaît avec le commit `f19260db`, intitulé **« chore: snapshot état complet — reorg sources NKSL + Nkoung ... + Kernel/AI & Kernel/Bare ... »**.

Cette étape correspond à une consolidation importante de l'état du projet. Les sources sont réorganisées et de nouvelles parties du moteur sont intégrées, notamment les éléments liés à `Kernel/AI` et `Kernel/Bare`. Le message mentionne également la réorganisation des sources et l'ajout de fichiers de configuration et de scripts Git.

## 4. Troisième évolution importante : intégration de nouvelles fonctionnalités

Plus récemment, le fichier apparaît dans plusieurs commits accompagnant l'évolution générale du moteur. Parmi eux, le commit `e455ee91` est particulièrement intéressant. Son message est **« fix: retire l'inclusion accidentelle de WIP d'autres agents dans ... Nkentseu.jenga ... »**.

Cette modification montre que `Nkentseu.jenga` faisait partie des fichiers concernés par une intégration accidentelle de travaux en cours. Le commit sert donc à retirer ces modifications qui ne correspondaient pas au travail concerné, tout en conservant le travail dans un stash pour pouvoir le reprendre ultérieurement.

L'historique plus récent montre ensuite que le workspace continue d'accompagner l'évolution de nombreux composants du moteur : `NKCode`, `NK3DModeler`, `NKGui`, `NKAnimation`, `NKAI`, `NKMedia`, etc. Par exemple, les commits `addf709d`, `cc41ca45` et `849a7e5e` correspondent respectivement à des évolutions de NKCode, à l'intégration du jeu GemCrush et à des modifications importantes de NK3DModeler.

## Conclusion

L'histoire de `Nkentseu.jenga` montre donc une évolution progressive du workspace. Le fichier commence par être renommé et adapté au workspace Nkentseu, puis la structure du projet est réorganisée autour de plusieurs modules du moteur. Une nouvelle phase de consolidation réorganise les sources et ajoute différentes parties du projet. Enfin, le fichier continue d'être maintenu au fur et à mesure que de nouveaux modules et applications sont intégrés.

Les messages des commits montrent principalement trois raisons derrière ces évolutions : **réorganiser l'architecture du workspace, intégrer de nouveaux composants du moteur et corriger ou nettoyer les modifications accidentelles**. L'historique Git permet ainsi de suivre non seulement les changements du fichier, mais également l'évolution générale de l'organisation du moteur Nkentseu.
