#include "NKWindow/NKMain.h"

#include "NKCanvas/App/NkCanvasApp.h"


NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "Downce";
    d.appVersion = "1.0.0";
    return d;
})());
 
using namespace nkentseu::renderer;
class Downce : public NkCanvasApp{
     public :
      Downce(){
        Config().title = "Downce";
        Config().width = 800 ;
        Config().height = 600 ;
        Config().clearColor = NkColor2D{18, 156, 189, 255};
        //Configuration de la fenetre
        
      } 

      bool OnInit() override {
        return true;
      }

};
int nkmain(const nkentseu::NkEntryState &state) {

    return NkCanvasApp::Run<Downce>(state);
}
