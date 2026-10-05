#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"

#include "NKCanvas/Core/NkContextDesc.h"
#include "NKCanvas/Core/NkGraphicsApi.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Renderer/Core/NkRenderer2D.h"
#include "NKCanvas/App/NkCanvasApp.h"


NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "Downce";
    d.appVersion = "1.0.0";
    return d;
})());

class Downce : public nkentseu::renderer::NkCanvasApp{
     public :
      Downce(){
        Config().title = "Downce";
        Config().width = 800 ;
        Config().height = 600 ;
        Config().clearColor = nkentseu::renderer::NkColor2D{18, 156, 189, 255};
        //Configuration de la fenetre
        
      } 

      bool OnInit() override {
        return true;
      }

};
int nkmain(const nkentseu::NkEntryState &state) {

    return nkentseu::renderer::NkCanvasApp::Run<Downce>(state);
}
