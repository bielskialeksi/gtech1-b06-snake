#include <SDL2/SDL.h>
using namespace std;

class MainSDLWindow {
public:
    MainSDLWindow();
    ~MainSDLWindow();
    int Init(const char *name, int largeur, int hauteur);
    void clear();
    SDL_Renderer * GetRenderer(void);
private:
    SDL_Window * window;
    SDL_Renderer * renderer; 
<<<<<<< HEAD
};

=======
};
>>>>>>> 1971166cf2652b2b41eb78cbd94735704cda2cd1
