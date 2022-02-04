#include <SDL2/SDL.h>
using namespace std;

class Application {
    private:
        MainSDLWindow * win;
        Playground * pg;
        Uint32 frame_rate_ms;
    public:
        Application();
        ~Application();

};

class MainSDLWindow {
    private:
        SDL_Renderer * renderer;
        SDL_Window * window;
    public:
        MainSDLWindow();
        ~MainSDLWindow();
        SDL_Renderer * GetRenderer();
        int Init(const char *winname, int width, int height);
};

class Playground {
    private:
        Snake * snake;
        //coords_t fruit;
        int nbcol;
        int nbrow;
    public:
        Playground(int nbrow, int nbcol);
        ~Playground();
        Snake * GetSnake();
        //coords_t GetFruit();
        int Collide();
        int GetScore();
        int MeetFruit();
        int Next(int dir);
        void GenerateFruit();
        void init(int dir);

};

class Snake {
    private:
        Segment * head;
        Segment * tail;
        //coords_t prev_tail_coords;
        int dir_prev;
    public:
        Snake();
        ~Snake();
        Segment * GetHead();
        int Collide();
};

class Segment {
<<<<<<< HEAD

=======
    private :
        Segment* next;
        int pos_x;
        int pos_y;
        int dir;
    public :
        int GetPOS_X(void);
        int GetPOS_Y(void);
        int GetDIR(void);
        Segment(int pos_x, int pos_y, int dir);
        ~Segment();
>>>>>>> 66cc5f05b61b6de8ff61e57c3643ef3c91e675e4
};