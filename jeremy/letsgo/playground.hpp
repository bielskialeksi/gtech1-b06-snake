#include <SDL2/SDL.h>
#include "snake.hpp"
using namespace std;
class Playground {
    private:
        Snake * litsnake = new Snake(nbcol/2,nbrow/2,0);
        Segment * fruit;
        int nbcol;
        int nbrow;

    public:
        Playground(int nbrow, int nbcol);
        ~Playground();
        Snake * GetSnake();
        int Collide();
        int GetScore();
        int MeetFruit();
        void GenerateFruit();
        void init(int dir);
        int fruit_pos_x = 0;
        int fruit_pos_y = 0;
        

};