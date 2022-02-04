
#include "segment.cpp"
using namespace std;
class Snake {
    private:
        Segment * head;
        Segment * tail;
    public:
        Snake(int pos_x,int pos_y,int dir);
        ~Snake();
        Segment * GetHead();
        int Collide();
        int Move();
        int GrowFront(int pos_x,int pos_y,int dir);
        int DeleteLast();
        int Eat();

};