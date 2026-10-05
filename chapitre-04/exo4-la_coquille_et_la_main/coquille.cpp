#include "NKWindow/NKWindow.h"
#include "NKWindow/NKMain.h"

#include "NKCanvas/Core/NkContextDesc.h"
#include "NKCanvas/Core/NkGraphicsApi.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Renderer/Core/NkRenderer2D.h"
#include "NKCanvas/App/NkCanvasApp.h"

#include "NKMath/NKMath.h"
#include "NKTime/NkTime.h"


using namespace nkentseu;
using namespace nkentseu::renderer;

class Fenetre : public NkCanvasApp{
    math::NkRect2f carre{20, 20, 50, 50};
   float32 deltaTime = 100.f; // Vitesse par seconde

    public :
        Fenetre() {
            Config().title = "Fenetre nue";
            Config().width = 1200;
            Config().height = 600;
            Config().clearColor = NkColor2D{36, 36, 36, 255};
        }

        bool OnInit() override {
            
            return true;
        }

        void OnUpdate(float32 deltaTime) override{
			//nkentseu::float32 deltaTime = 100.f; // Vitesse par seconde
		}

        void OnRender(NkRenderWindow &target) override {
			NkRenderer2D &c2d = target.GetRenderer2D();
            c2d.DrawFilledRect(carre, nkentseu::renderer::NkColor2D{255, 0, 0, 255});
		}

        bool OnEvent(const NkEvent &event) override {
			if (auto* kp = event.As<NkKeyPressEvent>()) {
            if (kp->GetKey() == NkKey::NK_UP){
                carre.y -= deltaTime;
            }
            if (kp->GetKey() == NkKey::NK_DOWN){
                carre.y += deltaTime;
            }
            if (kp->GetKey() == NkKey::NK_RIGHT){
                carre.x += deltaTime;
            }
            if (kp->GetKey() == NkKey::NK_LEFT){
                carre.x -= deltaTime;
            }
        }
			return false;
		}
};

int nkmain(const nkentseu::NkEntryState &state){
    return NkCanvasApp::Run<Fenetre>(state);
}