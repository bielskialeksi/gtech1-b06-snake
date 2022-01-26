#include <SDL2/SDL.h>
#include <string>
using namespace std;

class MainSDLWindow {
public:
    MainSDLWindow();
    ~MainSDLWindow();
    int Init( string name, int largeur, int hauteur);
    SDL_Renderer * GetRenderer(void);
private:
    SDL_Window * window;
    SDL_Renderer * renderer; 
};