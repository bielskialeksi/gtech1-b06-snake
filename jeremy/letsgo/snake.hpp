#include <SDL2/SDL.h>
#include "segment.cpp"
using namespace std;
class Snake {
    private:
        Segment * head;
        Segment * tail;
    public:
        Snake();
        ~Snake();
        Segment * GetHead();
        int Collide();
        int Move();
        int GrowFront();
        int DeleteLast();
        int Eat();

};