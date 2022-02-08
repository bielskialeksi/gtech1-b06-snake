#include <SDL2/SDL.h>
#include "snake.cpp"
using namespace std;

class Playground {
    private:  
        int nbcol;
        int nbrow;
        int score ;
    public:
        Playground(int nbrow, int nbcol);
        ~Playground(void);
        Snake * GetSnake();
        int Collide();
        int GetScore();
        int MeetFruit();
        void GenerateFruit();
        void init(int dir);
        int fruit_pos_x;
        int fruit_pos_y;
        Segment * fruit;
        Snake * snake = new Snake(nbcol/2,nbrow/2,0);
};