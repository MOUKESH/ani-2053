#include "NKWindow/NKWindow.h"
#include "NKWindow/NKMain.h"

using namespace nkentseu;

int nkmain(const NkEntryState &state) {
    NkWindowConfig cfg;
    cfg.title  = "Ma fenetre";
    cfg.width  = 1280;
    cfg.height = 720;
    cfg.minHeight = 500;
    cfg.minWidth = 360;
   

    cfg.resizable =true;
    cfg.frame= true;
    cfg.minimizable= true;
    cfg.movable= true;
    cfg.maximizable= true;
    cfg.canFullscreen= false;

    NkWindow window(cfg);
    math::NkVec2u sz = window.GetSize();

    std::cout << sz.height << std::endl;
    std::cout << sz.width << std::endl;

    if(!window.Create(cfg)) {
        return -1;
    }
   
    while (window.IsOpen()) {
    // 1) Vider TOUTE la file d'événements de la frame.
    while (NkEvent* ev = NkEvents().PollEvent()) {
        // ev pointe vers l'événement courant. On l'identifie (section 3.3).
        if (ev->Is<NkWindowCloseEvent>()) {
            window.Close();          // l'utilisateur veut fermer
        }
        else if (auto* kp = ev->As<NkKeyPressEvent>()) {
            if (kp->GetKey() == NkKey::NK_ESCAPE) window.Close();
        }
        if(auto* vz = ev -> As<NkWindowResizeEvent>()){
            math::NkVec2u sz = window.GetSize();

            std::cout << "Nouvelle taille est :" << sz.width << ","<< sz.height<< std::endl;
        }

    }
}
    return 0;
}
