#include <SDL2/SDL.h>
#include "snake.hpp"
using namespace std;
class Playground {
    private:
        Snake * snake;
        int nbcol;
        int nbrow;
        //int score =0;
        //int fruit_pos_x;
        //int fruit_pos_y;b
    public:
        Playground(int nbrow, int nbcol);
        ~Playground();
        Snake * GetSnake();
        int Collide();
        int GetScore();
        int MeetFruit();
        int Next(int dir);
        void GenerateFruit();
        void init(int dir);
        // Segment * fruit;
        //int fruit_pos_x;
        //int fruit_pos_y;b
};