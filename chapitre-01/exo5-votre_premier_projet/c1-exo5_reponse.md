# Exercice 5:

##  Création de l'application

Pour commencer, j'ai créé une nouvelle application appelée `MonEssai` dans le dossier et j'ai ajouté les fichier main.cpp qui n'affiche rien et build.jenga.Voici le resultat obtenu après avoir build MonEssai: 

C:\Users\p\Desktop\Nkentseu>jenga build --traget MonEssai

╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║                ██╗███████╗███╗   ██╗ ██████╗  █████╗             ║
║                ██║██╔════╝████╗  ██║██╔════╝ ██╔══██╗            ║
║                ██║█████╗  ██╔██╗ ██║██║  ███╗███████║            ║
║           ██   ██║██╔══╝  ██║╚██╗██║██║   ██║██╔══██║            ║
║           ╚█████╔╝███████╗██║ ╚████║╚██████╔╝██║  ██║            ║
║            ╚════╝ ╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝            ║
║                                                                  ║
║             Multi-platform C/C++ Build System v2.8.0             ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝

Loading workspace...
[NKCode] ATTENTION : aucun wheel Jenga trouve (dist/*.whl) -> le paquet n'aura PAS de Jenga embarque, et les boutons Construire/Executer seront inoperants. Produisez-le avec ./cri.sh dans le depot Jenga.
Undeclared custom option(s) accepted for compatibility: --traget

Configuration: Debug
Target:        Windows x86_64
Toolchain:     clang-mingw

Build Order (213 projects):
  1. NKPlatform [STATIC_LIB] →
  2. NKGlad [STATIC_LIB] →
  3. NKGLSlang [STATIC_LIB] →
  4. NKSPIRVCross [STATIC_LIB] →
  5. NKMbedTLS [STATIC_LIB] →
  6. pybind11 [STATIC_LIB] →
  7. NKCore [STATIC_LIB] (depends: NKPlatform) →
  8. NKMemory [STATIC_LIB] (depends: NKCore, NKPlatform) →
  9. NKContainers [STATIC_LIB] (depends: NKCore, NKMemory, NKPlatform) →
  10. NKThreading [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform) →
  11. NKMath [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform) →
  12. NKLogger [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform, NKThreading) →
  13. NKSpeech [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  14. SandboxNKLogger [CONSOLE_APP] (depends: NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  15. NKFont [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  16. NKCollision [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  17. NKTime [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  18. NKFileSystem [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  19. NKEvolve [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  20. NKReflection [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  21. NKAnimPhysics [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  22. NKSpeechTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKSpeech, NKThreading) →
  23. NKPhysics [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  24. NKNavigation [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  25. NKEvent [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  26. NKAnimation [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  27. NKSL [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSPIRVCross, NKThreading) →
  28. NKNetwork [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  29. SandboxNKFileSystem [CONSOLE_APP] (depends: NKFileSystem, NKThreading, NKLogger, NKContainers, NKMemory, NKCore, NKPlatform) →
  30. NKStream [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKThreading) →
  31. NKSerialization [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKReflection, NKThreading) →
  32. SandboxNKReflection [CONSOLE_APP] (depends: NKReflection, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  33. NkNavCoreDemo [CONSOLE_APP] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNavigation, NKPlatform, NKThreading) →
  34. NKWindow [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  35. NkSLComputeCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  36. NkSLCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  37. SandboxNKNetwork [CONSOLE_APP] (depends: NKNetwork, NKTime, NKFileSystem, NKStream, NKMath, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  38. FontLoad [WINDOWED_APP] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  39. NKImage [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  40. NKECS [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKThreading) →
  41. NKRHI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  42. NKXR [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  43. NkImeTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  44. NKImageCodecTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  45. NKUI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  46. NKCanvas [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  47. NKGui [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  48. NKMedia [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  49. NkRHIDemoFullImage [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  50. NKTensor [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  51. NkFontDemo [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  52. NkGpuProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  53. NkRHIInterpTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  54. NkFDV2 [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  55. NkSWRasterPrimitives [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  56. NkComputeNkSL [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  57. Model [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  58. NkRHIDemoFull [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  59. RendererRHI [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  60. NKRenderer [STATIC_LIB] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  61. NKUIIntegration [STATIC_LIB] (depends: NKUI, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  62. NKRHIDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  63. MonEssai [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKWindow) →
  64. NewGeneration [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  65. NkImageDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  66. firsttriangle [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  67. cr2d [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  68. NKImGuiIntegration [STATIC_LIB] (depends: NKCanvas, NKImage, NKFont, NKRHI, NKSL, NKEvent, NKWindow, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKStream, NKTime, NKFileSystem, NKReflection, NKSerialization) →
  69. NkDrawableDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  70. NkSpriteDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  71. NKCamera [STATIC_LIB] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  72. ConquerorProto [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  73. Gamepad [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  74. NkCanvasDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  75. Unkeny [STATIC_LIB] (depends: NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  76. NKGuiDrawTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  77. NKGuiDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  78. Nkoung [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  79. NKGuiIntegration [STATIC_LIB] (depends: NKGui, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  80. NkRef [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  81. NKEditorKit [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  82. NkPdfRasterTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  83. NKViewportDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  84. NkFileWorkerTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  85. NkPdfProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  86. NkPdfRenderProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  87. NKVideoTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  88. NkVideoReadTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  89. NKMediaTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  90. NKAudio [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  91. NKEvolveNNTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  92. NKData [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  93. NKAutograd [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  94. NkTensorGpuTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  95. NKTensorDemo [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  96. NKGpuBenchTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  97. NKEvolveTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  98. Tuto02Renderer [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  99. NKXRDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  100. r2d01 [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  101. NKEditMeshHarness [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  102. Tuto04Camera [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  103. Tuto03Scene [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  104. Tuto05Meshes [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  105. gltftest [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  106. Tuto01Fenetre [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  107. NkFBXParityDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  108. ImGuiRef [WINDOWED_APP] (depends: NKImGuiIntegration, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  109. NKARDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCamera, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  110. NkCameraDemos [WINDOWED_APP] (depends: NKCamera, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  111. NKPA [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  112. NKEditorKitDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  113. NK3DModeler [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  114. NkAnimaEditor [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  115. NKEditorKitTest [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  116. ConquerorLab [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  117. NKUIDesign [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  118. NkAudioDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  119. NkVideoPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  120. GemCrush [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  121. NkEchecs [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  122. NKOpusRef [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  123. NKSpeechFeatureDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKSpeech, NKStream, NKThreading) →
  124. UnkenyEditor [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, Unkeny) →
  125. NkDames [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  126. NkAnimPhysTest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAudio, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  127. NkMicRecord [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  128. NkAudioPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  129. Mou [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  130. Pong [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  131. NKCode [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  132. RihenDefi [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  133. NkLudo [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  134. NKDataTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  135. NKBpeTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  136. NKConvResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  137. NKOptim [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  138. NKConvBenchTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  139. NKInfer [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  140. NKNN [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  141. NKFp16Test [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  142. NKMlpResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  143. NKQwen2Ask [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  144. NKGGUFInspectTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  145. NKQwenTokenizerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  146. NKQwen2BackwardTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  147. NKQ4MatmulTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  148. NKQwen2Train [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  149. NKQwen2SftGpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  150. NKQwen2SftTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  151. NKQwen2GpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  152. NKQwen2Chat [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  153. NKLLMInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  154. NKRL [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  155. NKRebasinTransformer [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  156. NKConvTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  157. NKNNTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  158. NKAutogradTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  159. NKLlamaBlockTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  160. NKGpt [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKFileSystem, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading, NKTime) →
  161. NKTrain [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  162. NKGen [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKTensor, NKThreading) →
  163. NKRLTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  164. NKAgent [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading, NKTime) →
  165. NKTransformerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  166. NKRnnCtcTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  167. NKIlyana [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGpt, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKNetwork, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  168. NKInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  169. NKMnistGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  170. NKMeshAITest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  171. NKASRTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  172. NKGptTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  173. NKTTSTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  174. NKTrainTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  175. NkVoiceLoopDemo [CONSOLE_APP] (depends: NKAudio, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  176. NKMnistCnnGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  177. NKRebasinTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  178. NKConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  179. NKVoxelGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  180. NKGenMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  181. NKGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  182. NKDiffusionTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  183. NKGen3DTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  184. NKSmoothMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  185. NKVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  186. NKEditTargetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  187. NKMeshRenderTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  188. NKMnistVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  189. NKMatTypeResetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  190. NKMnistConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  191. renderdemo [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross, NKGen, NKNN, NKAutograd, NKTensor) →
  192. NKObjectGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  193. Noge [STATIC_LIB] (depends: NKGlad, NKMath, NKTime, NKLogger, NKEvent, NKWindow, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKSL, NKRenderer, NKCollision, NKPhysics, NKNavigation, NKSerialization, NKFileSystem, NKFont, NKImage, NKECS, NKRL, NKAgent, NKAudio, NKMedia, NKNetwork) →
  194. NKCivilization [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKECS, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKReflection, NKSerialization, NKTensor, NKThreading) →
  195. NKAgentTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  196. NKAgentLLMTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  197. NKEmbodied [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading) →
  198. Nogee [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  199. NkLocomotionDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  200. NkSVGImportDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  201. NkAgentEcsDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  202. NkAudioECSDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  203. NkHotReloadDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  204. NkNetWorldDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  205. NkNavDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  206. NkEditableMeshDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  207. NkUIHudDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  208. PV3DE [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  209. NkAssetIODemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  210. NKCivilizationScaleTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  211. NKCivilizationSocialTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  212. NKCivilizationTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  213. NKEmbodiedTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEmbodied, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow)


╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKPlatform                                                       Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓   [1/7] Compiled: NkArchDetect.cpp
✓   [2/7] Compiled: NkCGXDetect.cpp
✓   [3/7] Compiled: NkCompilerDetect.cpp
✓   [4/7] Compiled: NkEndianness.cpp
✓   [5/7] Compiled: NkEnv.cpp
✓   [6/7] Compiled: NkPlatformConfig.cpp
✓   [7/7] Compiled: NkCPUFeatures.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKPlatform.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.56s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGlad                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓   [1/2] Compiled: wgl.c
✓   [2/2] Compiled: gl.c
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKGlad.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.01s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGLSlang                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 50 source file(s)
✓   [1/50] Compiled: InitializeDll.cpp
✓   [2/50] Compiled: disassemble.cpp
✓   [3/50] Compiled: CodeGen.cpp
✓   [4/50] Compiled: doc.cpp
✓   [5/50] Compiled: InReadableOrder.cpp
✓   [6/50] Compiled: Logger.cpp
✓   [7/50] Compiled: Link.cpp
✓   [8/50] Compiled: spirv_c_interface.cpp
✓   [9/50] Compiled: glslang_c_interface.cpp
✓   [10/50] Compiled: SpvPostProcess.cpp
✓   [11/50] Compiled: hlslAttributes.cpp
✓   [12/50] Compiled: hlslOpMap.cpp
✓   [13/50] Compiled: InfoSink.cpp
✓   [14/50] Compiled: SpvBuilder.cpp
✓   [15/50] Compiled: hlslParseables.cpp
✓   [16/50] Compiled: hlslTokenStream.cpp
✓   [17/50] Compiled: hlslGrammar.cpp
✓   [18/50] Compiled: hlslScanContext.cpp
✓   [19/50] Compiled: IntermTraverse.cpp
✓   [20/50] Compiled: PoolAlloc.cpp
✓   [21/50] Compiled: Constant.cpp
✓   [22/50] Compiled: Initialize.cpp
✓   [23/50] Compiled: RemoveTree.cpp
✓   [24/50] Compiled: Intermediate.cpp
✓   [25/50] Compiled: GlslangToSpv.cpp
✓   [26/50] Compiled: ParseContextBase.cpp
✓   [27/50] Compiled: SymbolTable.cpp
✓   [28/50] Compiled: SpirvIntrinsics.cpp
✓   [29/50] Compiled: Scan.cpp
✓   [30/50] Compiled: Versions.cpp
✓   [31/50] Compiled: attribute.cpp
✓   [32/50] Compiled: hlslParseHelper.cpp
✓   [33/50] Compiled: intermOut.cpp
✓   [34/50] Compiled: ShaderLang.cpp
✓   [35/50] Compiled: ParseHelper.cpp
✓   [36/50] Compiled: limits.cpp
✓   [37/50] Compiled: parseConst.cpp
✓   [38/50] Compiled: glslang_tab.cpp
✓   [39/50] Compiled: iomapper.cpp
✓   [40/50] Compiled: PpAtom.cpp
✓   [41/50] Compiled: resource_limits_c.cpp
✓   [42/50] Compiled: ResourceLimits.cpp
✓   [43/50] Compiled: PpContext.cpp
✓   [44/50] Compiled: linkValidate.cpp
✓   [45/50] Compiled: Pp.cpp
✓   [46/50] Compiled: PpScanner.cpp
✓   [47/50] Compiled: ossource.cpp
✓   [48/50] Compiled: PpTokens.cpp
✓   [49/50] Compiled: propagateNoContraction.cpp
✓   [50/50] Compiled: reflection.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKGLSlang.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                            Time: 19.31s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSPIRVCross                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project NKSPIRVCross

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMbedTLS                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 109 source file(s)
✓   [1/109] Compiled: sha256.c
✓   [2/109] Compiled: psa_crypto_storage.c
✓   [3/109] Compiled: ssl_cookie.c
✓   [4/109] Compiled: des.c
✓   [5/109] Compiled: x509_create.c
✓   [6/109] Compiled: poly1305.c
✓   [7/109] Compiled: bignum_mod_raw.c
✓   [8/109] Compiled: ecdh.c
✓   [9/109] Compiled: ssl_tls13_generic.c
✓   [10/109] Compiled: base64.c
✓   [11/109] Compiled: pk.c
✓   [12/109] Compiled: chachapoly.c
✓   [13/109] Compiled: platform.c
✓   [14/109] Compiled: ssl_cache.c
✓   [15/109] Compiled: ecp_curves.c
✓   [16/109] Compiled: chacha20.c
✓   [17/109] Compiled: camellia.c
✓   [18/109] Compiled: entropy_poll.c
✓   [19/109] Compiled: aria.c
✓   [20/109] Compiled: platform_util.c
✓   [21/109] Compiled: pkcs12.c
✓   [22/109] Compiled: pkparse.c
✓   [23/109] Compiled: psa_crypto_rsa.c
✓   [24/109] Compiled: aesni.c
✓   [25/109] Compiled: psa_crypto.c
✓   [26/109] Compiled: cipher_wrap.c
✓   [27/109] Compiled: psa_util.c
✓   [28/109] Compiled: cmac.c
✓   [29/109] Compiled: ssl_tls13_server.c
✓   [30/109] Compiled: hkdf.c
✓   [31/109] Compiled: constant_time.c
✓   [32/109] Compiled: ssl_msg.c
✓   [33/109] Compiled: ripemd160.c
✓   [34/109] Compiled: aes.c
✓   [35/109] Compiled: psa_crypto_client.c
✓   [36/109] Compiled: psa_crypto_driver_wrappers_no_static.c
✓   [37/109] Compiled: net_sockets.c
✓   [38/109] Compiled: ctr_drbg.c
✓   [39/109] Compiled: nist_kw.c
✓   [40/109] Compiled: psa_crypto_random.c
✓   [41/109] Compiled: mps_trace.c
✓   [42/109] Compiled: ssl_tls12_server.c
✓   [43/109] Compiled: ssl_client.c
✓   [44/109] Compiled: bignum_mod.c
✓   [45/109] Compiled: asn1parse.c
✓   [46/109] Compiled: block_cipher.c
✓   [47/109] Compiled: memory_buffer_alloc.c
✓   [48/109] Compiled: psa_its_file.c
✓   [49/109] Compiled: sha512.c
✓   [50/109] Compiled: ssl_tls12_client.c
✓   [51/109] Compiled: psa_crypto_ffdh.c
✓   [52/109] Compiled: rsa_alt_helpers.c
✓   [53/109] Compiled: sha1.c
✓   [54/109] Compiled: psa_crypto_ecp.c
✓   [55/109] Compiled: psa_crypto_mac.c
✓   [56/109] Compiled: rsa.c
✓   [57/109] Compiled: md5.c
✓   [58/109] Compiled: pkwrite.c
✓   [59/109] Compiled: psa_crypto_hash.c
✓   [60/109] Compiled: aesce.c
✓   [61/109] Compiled: asn1write.c
✓   [62/109] Compiled: version_features.c
✓   [63/109] Compiled: ecp.c
✓   [64/109] Compiled: ssl_ticket.c
✓   [65/109] Compiled: gcm.c
✓   [66/109] Compiled: pk_wrap.c
✓   [67/109] Compiled: ecjpake.c
✓   [68/109] Compiled: ecdsa.c
✓   [69/109] Compiled: ssl_tls.c
✓   [70/109] Compiled: ssl_debug_helpers_generated.c
✓   [71/109] Compiled: x509.c
✓   [72/109] Compiled: mps_reader.c
✓   [73/109] Compiled: lms.c
✓   [74/109] Compiled: psa_crypto_slot_management.c
✓   [75/109] Compiled: oid.c
✓   [76/109] Compiled: ssl_tls13_client.c
✓   [77/109] Compiled: debug.c
✓   [78/109] Compiled: psa_crypto_se.c
✓   [79/109] Compiled: pkcs7.c
✓   [80/109] Compiled: entropy.c
✓   [81/109] Compiled: hmac_drbg.c
✓   [82/109] Compiled: lmots.c
✓   [83/109] Compiled: sha3.c
✓   [84/109] Compiled: dhm.c
✓   [85/109] Compiled: psa_crypto_cipher.c
✓   [86/109] Compiled: psa_crypto_aead.c
✓   [87/109] Compiled: ecp_curves_new.c
✓   [88/109] Compiled: cipher.c
✓   [89/109] Compiled: version.c
✓   [90/109] Compiled: error.c
✓   [91/109] Compiled: bignum_core.c
✓   [92/109] Compiled: pkcs5.c
✓   [93/109] Compiled: ssl_ciphersuites.c
✓   [94/109] Compiled: bignum.c
✓   [95/109] Compiled: psa_crypto_pake.c
✓   [96/109] Compiled: threading.c
✓   [97/109] Compiled: padlock.c
✓   [98/109] Compiled: md.c
✓   [99/109] Compiled: pk_ecc.c
✓   [100/109] Compiled: pem.c
✓   [101/109] Compiled: ssl_tls13_keys.c
✓   [102/109] Compiled: ccm.c
✓   [103/109] Compiled: x509_csr.c
✓   [104/109] Compiled: x509write.c
✓   [105/109] Compiled: x509write_crt.c
✓   [106/109] Compiled: x509write_csr.c
✓   [107/109] Compiled: timing.c
✓   [108/109] Compiled: x509_crt.c
✓   [109/109] Compiled: x509_crl.c
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKMbedTLS.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 9.16s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: pybind11                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project pybind11

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCore                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓   [1/5] Compiled: NkAssert.cpp
✓   [2/5] Compiled: NkLimits.cpp
✓   [3/5] Compiled: NkTraits.cpp
✓   [4/5] Compiled: NkBits.cpp
✓   [5/5] Compiled: NkPlatform.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKCore.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.50s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMemory                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓   [1/14] Compiled: NkContainerAllocator.cpp
✓   [2/14] Compiled: NkFunction.cpp
✓   [3/14] Compiled: NkGlobalOperators.cpp
✓   [4/14] Compiled: NkFunctionSIMD.cpp
✓   [5/14] Compiled: NkGc.cpp
✓   [6/14] Compiled: NkHash.cpp
✓   [7/14] Compiled: NkProfiler.cpp
✓   [8/14] Compiled: NkMemory.cpp
✓   [9/14] Compiled: NkMultiLevelAllocator.cpp
✓   [10/14] Compiled: NkUtils.cpp
✓   [11/14] Compiled: NkPoolAllocator.cpp
✓   [12/14] Compiled: NkTracker.cpp
✓   [13/14] Compiled: NkTag.cpp
✓   [14/14] Compiled: NkAllocator.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKMemory.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.13s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKContainers                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 43 source file(s)
✓   [1/43] Compiled: NkSet.cpp
✓   [2/43] Compiled: NkBTree.cpp
✓   [3/43] Compiled: NkArray.cpp
✓   [4/43] Compiled: NkBind.cpp
✓   [5/43] Compiled: NkHashMap.cpp
✓   [6/43] Compiled: NkVector.cpp
✓   [7/43] Compiled: NkContainers.cpp
✓   [8/43] Compiled: NkIterator.cpp
✓   [9/43] Compiled: NkTrie.cpp
✓   [10/43] Compiled: NkASCII.cpp
✓   [11/43] Compiled: NkDeque.cpp
✓   [12/43] Compiled: NkUnorderedSet.cpp
✓   [13/43] Compiled: NkRingBuffer.cpp
✓   [14/43] Compiled: NkInitializerList.cpp
✓   [15/43] Compiled: NkQuadTree.cpp
✓   [16/43] Compiled: NkMap.cpp
✓   [17/43] Compiled: NkPriorityQueue.cpp
✓   [18/43] Compiled: NkUnorderedMap.cpp
✓   [19/43] Compiled: NkPool.cpp
✓   [20/43] Compiled: NkDoubleList.cpp
✓   [21/43] Compiled: NkPair.cpp
✓   [22/43] Compiled: NkFunction.cpp
✓   [23/43] Compiled: NkBinaryTree.cpp
✓   [24/43] Compiled: NkTuple.cpp
✓   [25/43] Compiled: NkFunctional.cpp
✓   [26/43] Compiled: NkGraph.cpp
✓   [27/43] Compiled: NkUTF16.cpp
✓   [28/43] Compiled: NkList.cpp
✓   [29/43] Compiled: NkEncoding.cpp
✓   [30/43] Compiled: NkBase64.cpp
✓   [31/43] Compiled: NkUTF32.cpp
✓   [32/43] Compiled: NkUTF8.cpp
✓   [33/43] Compiled: NkBasicString.cpp
✓   [34/43] Compiled: NkOptional.cpp
✓   [35/43] Compiled: NkVariant.cpp
✓   [36/43] Compiled: NkResult.cpp
✓   [37/43] Compiled: NkSpan.cpp
✓   [38/43] Compiled: NkFormat.cpp
✓   [39/43] Compiled: NkStringHash.cpp
✓   [40/43] Compiled: NkStringView.cpp
✓   [41/43] Compiled: NkStringBuilder.cpp
✓   [42/43] Compiled: NkString.cpp
✓   [43/43] Compiled: NkStringUtils.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKContainers.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 4.30s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKThreading                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓   [1/12] Compiled: NkRecursiveMutex.cpp
✓   [2/12] Compiled: NkSemaphore.cpp
✓   [3/12] Compiled: NkSharedMutex.cpp
✓   [4/12] Compiled: NkEvent.cpp
✓   [5/12] Compiled: NkBarrier.cpp
✓   [6/12] Compiled: NkLatch.cpp
✓   [7/12] Compiled: NkConditionVariable.cpp
✓   [8/12] Compiled: NkMutex.cpp
✓   [9/12] Compiled: NkThread.cpp
✓   [10/12] Compiled: NkSpinLock.cpp
✓   [11/12] Compiled: NkThreadPool.cpp
✓   [12/12] Compiled: NkReaderWriterLock.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKThreading.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.27s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMath                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓   [1/12] Compiled: NkFunctions.cpp
✓   [2/12] Compiled: NkAngle.cpp
✓   [3/12] Compiled: NkSIMD.cpp
✓   [4/12] Compiled: NkEulerAngle.cpp
✓   [5/12] Compiled: NkMat.cpp
✓   [6/12] Compiled: NkQuat.cpp
✓   [7/12] Compiled: NkRange.cpp
✓   [8/12] Compiled: NkRandom.cpp
✓   [9/12] Compiled: NkColor.cpp
✓   [10/12] Compiled: NkRectangle.cpp
✓   [11/12] Compiled: NkSegment.cpp
✓   [12/12] Compiled: NkVec.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKMath.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 4.82s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKLogger                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓   [1/14] Compiled: NkLogLevel.cpp
✓   [2/14] Compiled: NkLoggerFormatter.cpp
✓   [3/14] Compiled: NkSink.cpp
✓   [4/14] Compiled: NkRegistry.cpp
✓   [5/14] Compiled: NkLog.cpp
✓   [6/14] Compiled: NkLogMessage.cpp
✓   [7/14] Compiled: NkLogger.cpp
✓   [8/14] Compiled: NkFileSink.cpp
✓   [9/14] Compiled: NkDistributingSink.cpp
✓   [10/14] Compiled: NkConsoleSink.cpp
✓   [11/14] Compiled: NkDailyFileSink.cpp
✓   [12/14] Compiled: NkAsyncSink.cpp
✓   [13/14] Compiled: NkNullSink.cpp
✓   [14/14] Compiled: NkRotatingFileSink.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKLogger.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 7.27s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSpeech                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓   [1/5] Compiled: NkG2P.cpp
✓   [2/5] Compiled: NkTextNorm.cpp
✓   [3/5] Compiled: NkAudioFeatures.cpp
✓   [4/5] Compiled: NkGriffinLim.cpp
✓   [5/5] Compiled: NkVoiceSynth.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKSpeech.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.67s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: SandboxNKLogger                                                 Kind: CONSOLE_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: main.cpp
ℹ Linking...
✓ Built: Build\Bin\Debug-Windows\SandboxNKLogger\SandboxNKLogger.exe

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.03s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFont                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓   [1/8] Compiled: NkFontDetect.cpp
✓   [2/8] Compiled: NkFontRasterizer.cpp
✓   [3/8] Compiled: NkFontParser.cpp
✓   [4/8] Compiled: NkFontSizeCache.cpp
✓   [5/8] Compiled: NkUtils.cpp
✓   [6/8] Compiled: NkFontMesh.cpp
✓   [7/8] Compiled: NkFontAtlas.cpp
✓   [8/8] Compiled: NkFontEmbedded.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKFont.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 5.31s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCollision                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: NkCollisionWorld.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKCollision.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.25s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKTime                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓   [1/8] Compiled: NkDate.cpp
✓   [2/8] Compiled: NkClock.cpp
✓   [3/8] Compiled: NkDuration.cpp
✓   [4/8] Compiled: NkTimeSpan.cpp
✓   [5/8] Compiled: NkTimeZone.cpp
✓   [6/8] Compiled: NkSystemClock.cpp
✓   [7/8] Compiled: NkChrono.cpp
✓   [8/8] Compiled: NkTimes.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKTime.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.24s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFileSystem                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓   [1/5] Compiled: NkFileWatcher.cpp
✓   [2/5] Compiled: NkFileSystem.cpp
✓   [3/5] Compiled: NkFile.cpp
✓   [4/5] Compiled: NkPath.cpp
✓   [5/5] Compiled: NkDirectory.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKFileSystem.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.95s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKEvolve                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓   [1/2] Compiled: NkPopulation.cpp
✓   [2/2] Compiled: NkEvolution.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKEvolve.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.44s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKReflection                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓   [1/7] Compiled: NkInspector.cpp
✓   [2/7] Compiled: NkType.cpp
✓   [3/7] Compiled: NkClass.cpp
✓   [4/7] Compiled: NkMethod.cpp
✓   [5/7] Compiled: NkProperty.cpp
✓   [6/7] Compiled: NkRegistry.cpp
✓   [7/7] Compiled: NkReflection.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKReflection.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.32s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKAnimPhysics                                                    Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 6 source file(s)
✓   [1/6] Compiled: NkBalance.cpp
✓   [2/6] Compiled: NkAutoPose.cpp
✓   [3/6] Compiled: NkClipBalancePass.cpp
✓   [4/6] Compiled: NkContactDetector.cpp
✓   [5/6] Compiled: NkPoseMass.cpp
✓   [6/6] Compiled: NkPoseBalancer.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKAnimPhysics.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.39s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSpeechTest                                                    Kind: CONSOLE_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: main.cpp
ℹ Linking...
✓ Built: Build\Bin\Debug-Windows\NKSpeechTest\NKSpeechTest.exe

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.86s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKPhysics                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓   [1/2] Compiled: NkIntegrator.cpp
✓   [2/2] Compiled: NkPhysicsWorld.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKPhysics.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.51s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKNavigation                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: NkNavMesh.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKNavigation.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.11s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKEvent                                                          Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 10 source file(s)
✓   [1/10] Compiled: NkEvent.cpp
✓   [2/10] Compiled: NkDropSystem.cpp
✓   [3/10] Compiled: NkEventState.cpp
✓   [4/10] Compiled: NkKeyboardEvent.cpp
✓   [5/10] Compiled: NkGamepadMappingPersistence.cpp
✓   [6/10] Compiled: NkMouseEvent.cpp
✓   [7/10] Compiled: NkEventDispatcher.cpp
✓   [8/10] Compiled: NkWindowEvent.cpp
✓   [9/10] Compiled: NkEventSystem.cpp
✓   [10/10] Compiled: NkGamepadSystem.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKEvent.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 6.69s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKAnimation                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 4 source file(s)
✓   [1/4] Compiled: NkMotionPath.cpp
✓   [2/4] Compiled: NkAnimationEditor.cpp
✓   [3/4] Compiled: NkAnimRetarget.cpp
✓   [4/4] Compiled: NkAnimation.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKAnimation.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 4.16s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSL                                                             Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 46 source file(s)
✓   [1/46] Compiled: NkSLCodeGenCPP.cpp
✓   [2/46] Compiled: NkSLCodeGenHLSLStructs.cpp
✓   [3/46] Compiled: NkSLCodeGenMSL.cpp
✓   [4/46] Compiled: NkSLCodeGenHLSLStructs.cpp
✓   [5/46] Compiled: NkSLCodeGenAdvanced.cpp
✓   [6/46] Compiled: NkSLCodeGenAdvanced.cpp
✓   [7/46] Compiled: NkSLCodeGenMSL.cpp
✓   [8/46] Compiled: NkSLCodeGenHLSLDX12.cpp
✓   [9/46] Compiled: NkSLCodeGenCPP.cpp
✓   [10/46] Compiled: NkSLCodeGenBytecode.cpp
✓   [11/46] Compiled: NkSLCodeGenGLSLVulkan.cpp
✓   [12/46] Compiled: NkSLCodeGenGLSLVulkan.cpp
✓   [13/46] Compiled: NkSLCodeGenGLSL.cpp
✓   [14/46] Compiled: NkSLCodeGenHLSLDX12.cpp
✓   [15/46] Compiled: NkSLCodeGenHLSL.cpp
✓   [16/46] Compiled: NkSLCodeGenGLSL.cpp
✓   [17/46] Compiled: NkSLCodeGenHLSL.cpp
✓   [18/46] Compiled: NkSLCodeGenBytecode.cpp
✓   [19/46] Compiled: NkSLLexer.cpp
✓   [20/46] Compiled: NkSLLexer.cpp
✓   [21/46] Compiled: NkSLParser.cpp
✓   [22/46] Compiled: NkSLCodeGenMSLSpirvCross.cpp
✓   [23/46] Compiled: NkSLCodeGenMSLSpirvCross.cpp
✓   [24/46] Compiled: NkSLFeatures.cpp
✓   [25/46] Compiled: NkSLParser.cpp
✓   [26/46] Compiled: NkSLFeatures.cpp
✓   [27/46] Compiled: NkSLSemantic.cpp
✓   [28/46] Compiled: NkSLSymbolTable.cpp
✓   [29/46] Compiled: NkSLSemantic.cpp
✓   [30/46] Compiled: NkSLSymbolTable.cpp
✓   [31/46] Compiled: NkSLCompiler.cpp
✓   [32/46] Compiled: NkSLCompiler.cpp
✓   [33/46] Compiled: NkGLSLCompiler.cpp
✓   [34/46] Compiled: NkGLSLCompiler.cpp
✓   [35/46] Compiled: NkSLReflector.cpp
✓   [36/46] Compiled: NkSLReflector.cpp
✓   [37/46] Compiled: NkSLByteCodeIO.cpp
✓   [38/46] Compiled: NkSLByteCodeIO.cpp
✓   [39/46] Compiled: NkSLVM.cpp
✓   [40/46] Compiled: NkSLVM.cpp
✓   [41/46] Compiled: NkShaderAnnotations.cpp
✓   [42/46] Compiled: NkShaderAnnotations.cpp
✓   [43/46] Compiled: NkShaderAnnotations.cpp

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║                            Compilation Error: NkShaderConvert.cpp                            ║
╠══════════════════════════════════════════════════════════════════════════════════════════════╣
║ C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp:2 ║
║ 3:10: fatal error: 'spirv_cross/spirv_glsl.hpp' file not found                               ║
║    23 | #include <spirv_cross/spirv_glsl.hpp>                                                ║
║       |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                ║
║ 1 error generated.                                                                           ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

✗ ✗ Compilation failed: C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║                            Compilation Error: NkShaderConvert.cpp                            ║
╠══════════════════════════════════════════════════════════════════════════════════════════════╣
║ C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp:2 ║
║ 3:10: fatal error: 'spirv_cross/spirv_glsl.hpp' file not found                               ║
║    23 | #include <spirv_cross/spirv_glsl.hpp>                                                ║
║       |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                ║
║ 1 error generated.                                                                           ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

✗ ✗ Compilation failed: C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║                            Compilation Error: NkShaderConvert.cpp                            ║
╠══════════════════════════════════════════════════════════════════════════════════════════════╣
║ C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp:2 ║
║ 3:10: fatal error: 'spirv_cross/spirv_glsl.hpp' file not found                               ║
║    23 | #include <spirv_cross/spirv_glsl.hpp>                                                ║
║       |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                ║
║ 1 error generated.                                                                           ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

✗ ✗ Compilation failed: C:\Users\p\Desktop\Nkentseu\Kernel\Runtime\NKSL\src\NKSL\ShaderConvert\NkShaderConvert.cpp

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✗ Build Failed                                                                Time: 14.77s  │
│ Errors: 6  | Failed files: 3                                                                 │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                  BUILD FAILED
════════════════════════════════════════════════════════════════════════════════
Projects Built:  26/213
Failed:         1
Not reached:    186  (arret au premier echec — voir --keep-going)
Errors:         6
Time:           1m54.6s
Status:         ✗ FAILURE
════════════════════════════════════════════════════════════════════════════════

Echecs (1) — a corriger :
  ✗ NKSL


C:\Users\p\Desktop\Nkentseu>