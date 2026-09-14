# Exercice 6

## voici ce qui s'affiche lorsque j'enlève les dependances:
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
  7. MonEssai [WINDOWED_APP] →
  8. NKCore [STATIC_LIB] (depends: NKPlatform) →
  9. NKMemory [STATIC_LIB] (depends: NKCore, NKPlatform) →
  10. NKContainers [STATIC_LIB] (depends: NKCore, NKMemory, NKPlatform) →
  11. NKThreading [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform) →
  12. NKMath [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform) →
  13. NKLogger [STATIC_LIB] (depends: NKContainers, NKCore, NKMemory, NKPlatform, NKThreading) →
  14. NKCollision [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  15. SandboxNKLogger [CONSOLE_APP] (depends: NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  16. NKFileSystem [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  17. NKSpeech [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  18. NKReflection [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  19. NKEvolve [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  20. NKAnimPhysics [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  21. NKTime [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  22. NKFont [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  23. NKNavigation [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  24. NKPhysics [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  25. NKStream [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKThreading) →
  26. NKSL [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSPIRVCross, NKThreading) →
  27. NKAnimation [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  28. SandboxNKFileSystem [CONSOLE_APP] (depends: NKFileSystem, NKThreading, NKLogger, NKContainers, NKMemory, NKCore, NKPlatform) →
  29. NKSpeechTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKSpeech, NKThreading) →
  30. NKSerialization [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKReflection, NKThreading) →
  31. SandboxNKReflection [CONSOLE_APP] (depends: NKReflection, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  32. NKNetwork [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  33. NKEvent [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  34. NkNavCoreDemo [CONSOLE_APP] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNavigation, NKPlatform, NKThreading) →
  35. NKImage [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  36. FontLoad [WINDOWED_APP] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  37. NkSLComputeCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  38. NkSLCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  39. NKECS [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKThreading) →
  40. SandboxNKNetwork [CONSOLE_APP] (depends: NKNetwork, NKTime, NKFileSystem, NKStream, NKMath, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  41. NKWindow [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  42. NKGui [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  43. NKUI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  44. NKMedia [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  45. NKImageCodecTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  46. NkImeTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  47. NKXR [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  48. NKRHI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  49. NKCanvas [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  50. NKEditorKit [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  51. NKGuiDrawTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  52. NkPdfRasterTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  53. NkPdfRenderProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  54. NKAudio [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  55. NkFileWorkerTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  56. NKVideoTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  57. NkPdfProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  58. NKMediaTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  59. NkVideoReadTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  60. RendererRHI [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  61. NkRHIInterpTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  62. NkRHIDemoFullImage [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  63. NkGpuProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  64. NkRHIDemoFull [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  65. NkSWRasterPrimitives [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  66. NkFDV2 [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  67. NkComputeNkSL [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  68. NKGuiIntegration [STATIC_LIB] (depends: NKGui, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  69. NKTensor [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  70. Model [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  71. NKUIIntegration [STATIC_LIB] (depends: NKUI, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  72. NKRenderer [STATIC_LIB] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  73. NkFontDemo [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  74. NKImGuiIntegration [STATIC_LIB] (depends: NKCanvas, NKImage, NKFont, NKRHI, NKSL, NKEvent, NKWindow, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKStream, NKTime, NKFileSystem, NKReflection, NKSerialization) →
  75. firsttriangle [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  76. NkImageDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  77. NkSpriteDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  78. NKCamera [STATIC_LIB] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  79. Nkoung [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  80. ConquerorProto [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  81. Gamepad [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  82. NkRef [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  83. Unkeny [STATIC_LIB] (depends: NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  84. NewGeneration [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  85. NKViewportDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  86. cr2d [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  87. NkCanvasDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  88. NkDrawableDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  89. NKGuiDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  90. NKRHIDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  91. ConquerorLab [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  92. NKEditorKitDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  93. NKUIDesign [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  94. NKEditorKitTest [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  95. RihenDefi [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  96. NkAudioPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  97. NkVideoPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  98. NkLudo [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  99. NKCode [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  100. NKOpusRef [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  101. GemCrush [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  102. NkMicRecord [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  103. Pong [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  104. NKSpeechFeatureDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKSpeech, NKStream, NKThreading) →
  105. NkEchecs [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  106. NkDames [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  107. NkAudioDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  108. Mou [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  109. NKPA [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  110. NKAutograd [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  111. NKData [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  112. NkTensorGpuTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  113. NKTensorDemo [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  114. NKEvolveNNTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  115. NKEvolveTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  116. NKGpuBenchTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  117. Tuto05Meshes [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  118. NkFBXParityDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  119. Tuto01Fenetre [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  120. NKXRDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  121. Tuto03Scene [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  122. Tuto02Renderer [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  123. NkAnimPhysTest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAudio, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  124. Tuto04Camera [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  125. NkAnimaEditor [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  126. r2d01 [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  127. NKEditMeshHarness [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  128. NK3DModeler [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  129. gltftest [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  130. ImGuiRef [WINDOWED_APP] (depends: NKImGuiIntegration, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  131. NkCameraDemos [WINDOWED_APP] (depends: NKCamera, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  132. NKARDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCamera, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  133. UnkenyEditor [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, Unkeny) →
  134. NKConvResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  135. NKInfer [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  136. NKNN [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  137. NKOptim [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  138. NKConvBenchTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  139. NKBpeTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  140. NKDataTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  141. NKQwen2SftGpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  142. NKQwen2Chat [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  143. NKQwen2Ask [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  144. NKQwenTokenizerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  145. NKLLMInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  146. NKQ4MatmulTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  147. NKQwen2Train [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  148. NKQwen2GpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  149. NKGGUFInspectTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  150. NKAutogradTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  151. NKGen [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKTensor, NKThreading) →
  152. NKGpt [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKFileSystem, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading, NKTime) →
  153. NKRebasinTransformer [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  154. NKFp16Test [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  155. NKNNTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  156. NKRL [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  157. NKQwen2SftTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  158. NKLlamaBlockTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  159. NKConvTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  160. NKTrain [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  161. NKQwen2BackwardTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  162. NKMlpResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  163. NKVoxelGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  164. renderdemo [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross, NKGen, NKNN, NKAutograd, NKTensor) →
  165. NKMnistVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  166. NKMatTypeResetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  167. NKVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  168. NKDiffusionTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  169. NKConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  170. NKSmoothMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  171. NKGen3DTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  172. NKEditTargetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  173. NKMeshRenderTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  174. NKMnistConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  175. NKGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  176. NKGenMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  177. NKObjectGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  178. NKRLTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  179. NKAgent [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading, NKTime) →
  180. NKTrainTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  181. NKMeshAITest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  182. NKInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  183. NKMnistGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  184. NKGptTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  185. NkVoiceLoopDemo [CONSOLE_APP] (depends: NKAudio, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  186. NKMnistCnnGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  187. NKTTSTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  188. NKASRTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  189. NKTransformerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  190. NKIlyana [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGpt, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKNetwork, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  191. NKRebasinTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  192. NKRnnCtcTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  193. Noge [STATIC_LIB] (depends: NKGlad, NKMath, NKTime, NKLogger, NKEvent, NKWindow, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKSL, NKRenderer, NKCollision, NKPhysics, NKNavigation, NKSerialization, NKFileSystem, NKFont, NKImage, NKECS, NKRL, NKAgent, NKAudio, NKMedia, NKNetwork) →
  194. NKCivilization [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKECS, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKReflection, NKSerialization, NKTensor, NKThreading) →
  195. NKAgentLLMTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  196. NKEmbodied [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading) →
  197. NKAgentTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  198. NkSVGImportDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  199. NkUIHudDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  200. NkNetWorldDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  201. NkNavDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  202. PV3DE [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  203. NkLocomotionDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  204. NkHotReloadDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  205. NkEditableMeshDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  206. Nogee [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  207. NkAgentEcsDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  208. NkAudioECSDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  209. NkAssetIODemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  210. NKCivilizationSocialTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  211. NKCivilizationScaleTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  212. NKCivilizationTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  213. NKEmbodiedTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEmbodied, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow)


╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKPlatform                                                       Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.13s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGlad                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.03s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGLSlang                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 50 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.33s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSPIRVCross                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project NKSPIRVCross

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMbedTLS                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 109 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 3.40s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: pybind11                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project pybind11

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: MonEssai                                                       Kind: WINDOWED_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: main.cpp
ℹ Linking...
✓ Built: Build\Bin\Debug-Windows\MonEssai\MonEssai.exe

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.53s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCore                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.10s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMemory                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.27s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKContainers                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 43 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.03s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKThreading                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.26s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMath                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.47s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKLogger                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.47s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCollision                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.06s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: SandboxNKLogger                                                 Kind: CONSOLE_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.04s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFileSystem                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.16s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSpeech                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.20s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKReflection                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.28s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKEvolve                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.07s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKAnimPhysics                                                    Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 6 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.26s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKTime                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.22s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFont                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.40s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKNavigation                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.06s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKPhysics                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.11s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKStream                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 4 source file(s)
✓   [1/4] Compiled: NkStream.cpp
✓   [2/4] Compiled: NkConsoleStream.cpp
✓   [3/4] Compiled: NkBinaryStream.cpp
✓   [4/4] Compiled: NkFileStream.cpp
ℹ Linking...
✓ Built: Build\Lib\Debug-Windows\NKStream.lib

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.21s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSL                                                             Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 46 source file(s)

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
│  ✗ Build Failed                                                                 Time: 4.23s  │
│ Errors: 6  | Failed files: 3                                                                 │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                  BUILD FAILED
════════════════════════════════════════════════════════════════════════════════
Projects Built:  25/213
Failed:         1
Not reached:    187  (arret au premier echec — voir --keep-going)
Errors:         6
Time:           16.85s
Status:         ✗ FAILURE
════════════════════════════════════════════════════════════════════════════════

Echecs (1) — a corriger :
  ✗ NKSL


## voici ce aui s'affiche lorsque j'enlève les linkers:

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
  13. SandboxNKLogger [CONSOLE_APP] (depends: NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  14. NKEvolve [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  15. NKAnimPhysics [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  16. NKFileSystem [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  17. NKReflection [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  18. NKCollision [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  19. NKSpeech [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  20. NKFont [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  21. NKTime [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMemory, NKPlatform, NKThreading) →
  22. NKAnimation [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  23. NKStream [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKThreading) →
  24. NKSL [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSPIRVCross, NKThreading) →
  25. SandboxNKFileSystem [CONSOLE_APP] (depends: NKFileSystem, NKThreading, NKLogger, NKContainers, NKMemory, NKCore, NKPlatform) →
  26. SandboxNKReflection [CONSOLE_APP] (depends: NKReflection, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  27. NKSerialization [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMemory, NKPlatform, NKReflection, NKThreading) →
  28. NKNavigation [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  29. NKPhysics [STATIC_LIB] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  30. NKSpeechTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKSpeech, NKThreading) →
  31. NKNetwork [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  32. NKEvent [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  33. NKImage [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  34. FontLoad [WINDOWED_APP] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  35. NkSLCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  36. NkSLComputeCheck [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKGLSlang, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading) →
  37. NKECS [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKThreading) →
  38. NkNavCoreDemo [CONSOLE_APP] (depends: NKCollision, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNavigation, NKPlatform, NKThreading) →
  39. SandboxNKNetwork [CONSOLE_APP] (depends: NKNetwork, NKTime, NKFileSystem, NKStream, NKMath, NKLogger, NKThreading, NKContainers, NKMemory, NKCore, NKPlatform) →
  40. NKWindow [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime) →
  41. NKImageCodecTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading) →
  42. NKGui [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  43. NKMedia [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  44. NKUI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  45. NKRHI [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  46. NKXR [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  47. NkImeTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKTime, NKWindow) →
  48. NKCanvas [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  49. NKEditorKit [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  50. NKGuiDrawTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading) →
  51. NkPdfRasterTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  52. NKAudio [STATIC_LIB] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  53. NKMediaTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  54. NkPdfRenderProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  55. NkFileWorkerTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  56. NKVideoTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  57. NkPdfProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  58. NkVideoReadTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  59. NkFDV2 [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  60. NkSWRasterPrimitives [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  61. NkFontDemo [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  62. NkGpuProbe [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  63. NKTensor [STATIC_LIB] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKThreading, NKTime, NKWindow) →
  64. NkComputeNkSL [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  65. NKUIIntegration [STATIC_LIB] (depends: NKUI, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  66. NkRHIInterpTest [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  67. NkRHIDemoFullImage [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  68. NkRHIDemoFull [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  69. RendererRHI [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  70. NKRenderer [STATIC_LIB] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  71. NKGuiIntegration [STATIC_LIB] (depends: NKGui, NKRHI, NKSL, NKEvent, NKWindow, NKImage, NKFont, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKTime, NKStream, NKFileSystem, NKReflection, NKSerialization) →
  72. Model [WINDOWED_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  73. ConquerorProto [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  74. Gamepad [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  75. cr2d [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  76. NKViewportDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  77. NkSpriteDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  78. firsttriangle [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  79. NkCanvasDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  80. Nkoung [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  81. NKCamera [STATIC_LIB] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  82. NKRHIDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  83. NkImageDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  84. NKImGuiIntegration [STATIC_LIB] (depends: NKCanvas, NKImage, NKFont, NKRHI, NKSL, NKEvent, NKWindow, NKMemory, NKCore, NKMath, NKContainers, NKLogger, NKPlatform, NKThreading, NKStream, NKTime, NKFileSystem, NKReflection, NKSerialization) →
  85. NewGeneration [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  86. Unkeny [STATIC_LIB] (depends: NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  87. NkRef [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  88. NkDrawableDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  89. NKGuiDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  90. MonEssai [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKThreading, NKWindow) →
  91. NKEditorKitDemo [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  92. NKUIDesign [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  93. NKEditorKitTest [CONSOLE_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKStream, NKThreading, NKTime, NKWindow) →
  94. ConquerorLab [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  95. NkAudioPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  96. NkEchecs [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  97. Mou [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  98. NKCode [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  99. NkDames [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  100. NkAudioDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  101. NkMicRecord [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime) →
  102. RihenDefi [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  103. GemCrush [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  104. Pong [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  105. NKSpeechFeatureDemo [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKSpeech, NKStream, NKThreading) →
  106. NkLudo [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  107. NkVideoPlayer [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow) →
  108. NKOpusRef [CONSOLE_APP] (depends: NKAudio, NKContainers, NKCore, NKFileSystem, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKStream, NKThreading) →
  109. NKTensorDemo [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  110. NkTensorGpuTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  111. NKEvolveTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  112. NKGpuBenchTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  113. NKAutograd [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  114. NKData [STATIC_LIB] (depends: NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  115. NKEvolveNNTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKEvent, NKEvolve, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  116. r2d01 [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  117. gltftest [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross) →
  118. NKXRDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  119. Tuto05Meshes [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  120. Tuto01Fenetre [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  121. Tuto02Renderer [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  122. NkAnimPhysTest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAudio, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  123. Tuto04Camera [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  124. NKEditMeshHarness [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  125. NkFBXParityDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow) →
  126. Tuto03Scene [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKAnimation, NKAnimPhysics, NKGLSlang, NKSPIRVCross) →
  127. NK3DModeler [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  128. NkAnimaEditor [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCollision, NKContainers, NKCore, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  129. NKPA [WINDOWED_APP] (depends: NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKThreading, NKTime, NKWindow, NKGuiIntegration) →
  130. NkCameraDemos [WINDOWED_APP] (depends: NKCamera, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  131. NKARDemo [WINDOWED_APP] (depends: NKAnimPhysics, NKAnimation, NKCamera, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, NKXR) →
  132. ImGuiRef [WINDOWED_APP] (depends: NKImGuiIntegration, NKCanvas, NKContainers, NKCore, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKStream, NKThreading, NKTime, NKWindow) →
  133. UnkenyEditor [WINDOWED_APP] (depends: NKAudio, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGlad, NKGui, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKReflection, NKSerialization, NKStream, NKThreading, NKTime, NKWindow, Unkeny) →
  134. NKOptim [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  135. NKInfer [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  136. NKConvBenchTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  137. NKNN [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKPlatform, NKTensor, NKThreading) →
  138. NKConvResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  139. NKDataTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  140. NKBpeTest [CONSOLE_APP] (depends: NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  141. NKFp16Test [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  142. NKMlpResidentBench [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  143. NKQ4MatmulTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  144. NKQwen2Chat [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  145. NKLLMInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  146. NKQwen2SftGpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  147. NKQwen2GpuTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  148. NKGGUFInspectTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  149. NKQwen2Train [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  150. NKQwenTokenizerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  151. NKQwen2SftTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  152. NKQwen2Ask [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  153. NKQwen2BackwardTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  154. NKTrain [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  155. NKRebasinTransformer [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  156. NKConvTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  157. NKGen [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKTensor, NKThreading) →
  158. NKNNTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  159. NKRL [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading) →
  160. NKLlamaBlockTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  161. NKAutogradTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  162. NKGpt [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKData, NKFileSystem, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKTensor, NKThreading, NKTime) →
  163. NKTTSTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  164. NKMeshAITest [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  165. NKTrainTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  166. NKMnistGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  167. NkVoiceLoopDemo [CONSOLE_APP] (depends: NKAudio, NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  168. NKInferTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  169. NKRnnCtcTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  170. NKRebasinTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  171. NKMnistCnnGpuTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  172. NKASRTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKSpeech, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  173. NKGenMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  174. NKMeshRenderTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  175. NKVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  176. NKEditTargetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  177. NKConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  178. NKGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  179. NKSmoothMeshTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  180. NKVoxelGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  181. NKMnistConvVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  182. NKDiffusionTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  183. NKMnistVAETest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  184. NKMatTypeResetTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  185. NKObjectGenTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  186. renderdemo [WINDOWED_APP] (depends: NKMedia, NKEvent, NKWindow, NKGlad, NKLogger, NKMath, NKTime, NKStream, NKFileSystem, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKRenderer, NKAnimation, NKAnimPhysics, NKSL, NKSerialization, NKReflection, NKImage, NKFont, NKGLSlang, NKSPIRVCross, NKGen, NKNN, NKAutograd, NKTensor) →
  187. NKGen3DTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGen, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  188. NKAgent [STATIC_LIB] (depends: NKAutograd, NKContainers, NKCore, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading, NKTime) →
  189. NKRLTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  190. NKTransformerTest [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  191. NKGptTrain [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKGpt, NKLogger, NKMath, NKMemory, NKNN, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  192. NKIlyana [CONSOLE_APP] (depends: NKAutograd, NKContainers, NKCore, NKData, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGpt, NKImage, NKLogger, NKMath, NKMedia, NKMemory, NKNN, NKNetwork, NKOptim, NKPlatform, NKRHI, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKTrain, NKWindow) →
  193. NKEmbodied [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKTensor, NKThreading) →
  194. NKAgentTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  195. NKAgentLLMTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  196. Noge [STATIC_LIB] (depends: NKGlad, NKMath, NKTime, NKLogger, NKEvent, NKWindow, NKContainers, NKMemory, NKCore, NKPlatform, NKThreading, NKRHI, NKSL, NKRenderer, NKCollision, NKPhysics, NKNavigation, NKSerialization, NKFileSystem, NKFont, NKImage, NKECS, NKRL, NKAgent, NKAudio, NKMedia, NKNetwork) →
  197. NKCivilization [STATIC_LIB] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKECS, NKFileSystem, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRL, NKReflection, NKSerialization, NKTensor, NKThreading) →
  198. NKEmbodiedTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKContainers, NKCore, NKEmbodied, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKSL, NKSPIRVCross, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  199. NkNetWorldDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  200. PV3DE [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  201. NkUIHudDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  202. NkAssetIODemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  203. NkAgentEcsDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  204. Nogee [WINDOWED_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEditorKit, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKGui, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKNavigation, NKNetwork, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge, NKGuiIntegration) →
  205. NkNavDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKNavigation, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  206. NkAudioECSDemo [CONSOLE_APP] (depends: NKAgent, NKAnimPhysics, NKAnimation, NKAudio, NKAutograd, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKInfer, NKLogger, NKMath, NKMedia, NKMemory, NKPhysics, NKPlatform, NKRHI, NKRL, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  207. NkHotReloadDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKImage, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  208. NkLocomotionDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGLSlang, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSPIRVCross, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  209. NkSVGImportDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKStream, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  210. NkEditableMeshDemo [CONSOLE_APP] (depends: NKAnimPhysics, NKAnimation, NKCanvas, NKCollision, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKFont, NKGlad, NKImage, NKLogger, NKMath, NKMemory, NKPhysics, NKPlatform, NKRHI, NKReflection, NKRenderer, NKSL, NKSerialization, NKThreading, NKTime, NKUI, NKWindow, Noge) →
  211. NKCivilizationSocialTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  212. NKCivilizationScaleTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow) →
  213. NKCivilizationTest [CONSOLE_APP] (depends: NKAgent, NKAutograd, NKCivilization, NKContainers, NKCore, NKECS, NKEvent, NKFileSystem, NKGLSlang, NKGlad, NKInfer, NKLogger, NKMath, NKMemory, NKPlatform, NKRHI, NKRL, NKReflection, NKSL, NKSPIRVCross, NKSerialization, NKStream, NKTensor, NKThreading, NKTime, NKWindow)


╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKPlatform                                                       Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.07s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGlad                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.02s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKGLSlang                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 50 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 1.11s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSPIRVCross                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project NKSPIRVCross

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMbedTLS                                                        Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 109 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.96s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: pybind11                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

No source files found for project pybind11

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCore                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.07s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMemory                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.21s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKContainers                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 43 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.87s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKThreading                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.20s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKMath                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 12 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.38s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKLogger                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 14 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.41s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: SandboxNKLogger                                                 Kind: CONSOLE_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.04s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKEvolve                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 2 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.06s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKAnimPhysics                                                    Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 6 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.23s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFileSystem                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.13s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKReflection                                                     Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 7 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.23s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKCollision                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.06s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSpeech                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 5 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.18s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKFont                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.36s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKTime                                                           Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 8 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.18s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKAnimation                                                      Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 4 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.19s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKStream                                                         Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 4 source file(s)
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.08s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: NKSL                                                             Kind: STATIC_LIB  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 46 source file(s)

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
│  ✗ Build Failed                                                                 Time: 3.32s  │
│ Errors: 6  | Failed files: 3                                                                 │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                  BUILD FAILED
════════════════════════════════════════════════════════════════════════════════
Projects Built:  23/213
Failed:         1
Not reached:    189  (arret au premier echec — voir --keep-going)
Errors:         6
Time:           11.92s
Status:         ✗ FAILURE
════════════════════════════════════════════════════════════════════════════════

Echecs (1) — a corriger :
  ✗ NKSL


## Difference

Les deux résultats se différencient principalement par le rôle des éléments que l’on enlève dans le fichier `.jenga`.

Lorsque l’on enlève les `dependencies`, on modifie les projets qui sont considérés comme nécessaires avant la construction de `MonEssai`. Cela a donc une influence directe sur l’ordre de construction. Dans le résultat obtenu, `MonEssai` apparaît beaucoup plus tôt dans l’ordre, après quelques projets seulement. Cela signifie que Jenga n’attend plus que les dépendances supprimées soient construites avant de traiter `MonEssai`.

Par contre, lorsque l’on enlève les `linkers`, on ne modifie pas directement les dépendances de construction. Les `linkers` indiquent principalement les bibliothèques qui doivent être liées au programme lors de la création de l'exécutable. Leur suppression agit donc surtout sur la phase finale de liaison de `MonEssai`, et non sur l'ordre général de construction des projets.

Ainsi, la différence essentielle est la suivante : **les `dependencies` déterminent ce qui doit être construit avant `MonEssai`, tandis que les `linkers` déterminent quelles bibliothèques sont liées à `MonEssai` lors de la création de l'exécutable.**
