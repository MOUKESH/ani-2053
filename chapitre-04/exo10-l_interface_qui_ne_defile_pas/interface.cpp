#include "NKWindow/NKWindow.h"
#include "NKWindow/NKMain.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Renderer/Shapes/NkRectangleShape.h"
#include "NKCanvas/Renderer/Resources/NkFont.h"
#include "NKCanvas/Renderer/Resources/NkSprite.h"   // contient NkText
#include "NKTime/NkClock.h"

using namespace nkentseu;
using namespace nkentseu::renderer;

int nkmain(const NkEntryState&) {
    NkWindowConfig cfg;
    cfg.title = "Interface fixe"; cfg.width = 1280; cfg.height = 720;
    NkWindow window;
    if (!window.Create(cfg)) return -1;

    NkContextDesc desc;
    desc.api = NkGraphicsApi::NK_GFX_API_OPENGL;
    NkRenderWindow target(window, desc);
    if (!target.IsValid()) return -1;

    NkFont font;
    font.LoadFromFile(*target.GetRenderer(), "assets/Roboto-Regular.ttf");

    NkClock clock;
    NkView2D view;
    view.size   = { 1280.f, 720.f };
    view.center = { 640.f, 360.f };

    while (window.IsOpen()) {
        while (NkEvent* ev = NkEvents().PollEvent()) {
            if (ev->Is<NkWindowCloseEvent>()) window.Close();
        }

        float32 dt = clock.Tick().delta;       // secondes, PAS un compteur de frames
        view.center.x += 80.f * dt;            // 80 px/s

        target.Clear({ 30, 30, 30, 255 });

        // --- Le monde, sous la caméra qui avance ---
        target.SetView(view);
        for (int i = 0; i < 30; ++i) {
            NkRectangleShape sq({ 60.f, 60.f });
            sq.SetPosition({ i * 100.f, 330.f });
            sq.SetFillColor({ 255, 128, 0, 255 });
            target.Draw(sq);
        }

        // --- L'interface ---
        target.SetView(target.GetDefaultView());   // = ResetView()
        // Version fautive gardée en commentaire :
        // (ligne ci-dessus retirée → la barre suit la caméra)

        NkRectangleShape bar({ 1280.f, 60.f });
        bar.SetPosition({ 0.f, 0.f });             // barre_x = 0
        bar.SetFillColor({ 20, 20, 60, 255 });
        target.Draw(bar);

        NkText label(font, "Interface fixe", 28);
        label.SetPosition({ 20.f, 40.f });         // ligne de base : y pas trop petit
        target.Draw(label);

        target.Display();
    }
    return 0;
}