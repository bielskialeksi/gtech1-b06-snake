#include <SDL2/SDL.h>
#include "snake.hpp"
using namespace std;
class Playground {
    private:
        Snake * snake;
        int nbcol;
        int nbrow;
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

};