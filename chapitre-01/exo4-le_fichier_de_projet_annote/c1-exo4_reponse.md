# Exercice 4

le module que j'ai choisi est NKTime.

voici son code

from Jenga import *
from jengaconfig import *;

## Type
with project("NKTime"):

## Dependances et Type
    nkentseudependson(
        ["NKContainers", "NKMemory", "NKLogger", "NKCore", "NKPlatform"],
        selfexport="NKTime",
        extra_includes=["src", "pch"],
    )

## Type
    language("C++")
    cppdialect("C++17")
    location(".")

## Sources
    files([
        "src/NKTime/**.cpp",
        "src/NKTime/**.h",
    ]) 

## Type
    objdir("%{wks.location}/Build/Obj/%{cfg.buildcfg}-%{cfg.system}/%{prj.name}")
    targetdir("%{wks.location}/Build/Lib/%{cfg.buildcfg}-%{cfg.system}") 

## Filtres ?
    with filter("system:Windows && options:windows-runtime=uwp"):
        objdir("%{wks.location}/Build/Obj/%{cfg.buildcfg}-%{cfg.system}-uwp/%{prj.name}")
        targetdir("%{wks.location}/Build/Lib/%{cfg.buildcfg}-%{cfg.system}-uwp")
    with filter("system:Windows && !options:windows-runtime=uwp && !system:XboxSeries && !system:XboxOne"):
        usetoolchain(TC_WINDOWS)
        # winmm : timeBeginPeriod / timeEndPeriod, pour BeginPreciseTiming.
        # Sans minuterie fine, tout Sleep de 1 a 12 ms dure ~15,5 ms (mesure du
        # 2026-08-15) et toute boucle calee au sommeil est quantifiee.
## Link
        links(["winmm"]) 

## Filtres ?
    with filter("system:UWP || system:Windows && options:windows-runtime=uwp"):
        usetoolchain("xbox-clang")
    with filter("system:Linux"):
       
 ## Link      
        links(["pthread"])
## Filtre  ?       
    with filter("system:macOS"):
        usetoolchain("clang-native")
## Filtre  ?      
    with filter("system:Android"):
        # Workaround: disable PCH on Android (NDK r27 + clang 18 + libc++)
        pchheader("")
        pchsource("")
        usetoolchain("android-ndk")
        links(["log"])
    with filter("system:HarmonyOS"):
        # PCH desactive (NDK OHOS clang, meme contrainte qu'Android)
        pchheader("")
        pchsource("")
        usetoolchain("ohos-ndk")
        links(["hilog_ndk.z"])
    with filter("system:Web"):
        usetoolchain("emscripten")
    with filter("system:XboxSeries || system:XboxOne"):
        usetoolchain("xbox-clang")

## Filtres ?
    with filter("config:Debug"):
        defines(["_DEBUG", "DEBUG"])
        optimize("Off")
        symbols(True)
    with filter("config:Release"):
        defines(["NDEBUG"])
        optimize("Speed")
        symbols(False)
## Test 
    # Tests unitaires/benchmarks (desktop uniquement)
    with filter("(system:Linux || system:macOS || (system:Windows && !options:windows-runtime=uwp && !system:XboxSeries && !system:XboxOne)) && !system:Android && !system:iOS || system:Web"):
        with test():
            testfiles(["tests/**.cpp"])

