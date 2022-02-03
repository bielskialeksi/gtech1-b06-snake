#include <SDL2/SDL.h>
#include "snake.hpp"
using namespace std;

Snake::Snake(){
    Segment *newSegment =  new Segment(int pos_x,int pos_y,int dir);


}

Snake::~Snake(){
}

int Snake::Collide(){

}

Segment * Snake::GetHead(){
    return this-> head;
}

int Move(){
    DeleteLast();
    GrowFront();
}
