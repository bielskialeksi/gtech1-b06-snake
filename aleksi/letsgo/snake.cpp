
#include "snake.hpp"
using namespace std;

Snake::Snake(int pos_x,int pos_y,int dir){
    Segment *newSegment =  new Segment(pos_x,pos_y,dir);
}

Snake::~Snake(){
}

Segment * Snake::GetHead(){
    return this-> head;
}

int Snake::Collide(){
    
    Segment * browsesnake = Gethead();
    while(browsesnake->next!= NULL){
        if (this->head->GetPOS_X() == browsesnake->next->GetPOS_X() && this->head->GetPOS_Y() ==  browsesnake->next->GetPOS_Y()){
            return 1;
        }
        browsesnake = browsesnake->next;
    }
    return 0;
}

Segment Snake::GetHead(){
    return *head;
}

void Snake::Move(){
    int pos_x, pos_y;
    Segment *old_head = this->head;
    pos_x = old_head->pos_x;
    pos_y = old_head->pos_y;
    new_dir=keyboard(this->head->GetDIR());
    if( new_dir != - this->head->GetDIR()){
        this->head->Setdir(new_dir);
    }
    switch(dir){
        case UP:
        pos_y -= 1;
        break;

        case DOWN:
        pos_y += 1;
        break;

        case LEFT:
        pos_x -= 1;
        break;

        case RIGHT:
        pos_x +=1;
        break;
    }
    this->head = new Segment(pos_x, pos_y,dir);
    head->next = old_head;
    Segment * browsesnake = this->head;
    Segment * lastsegment = NULL;
    while (browsesnake->next->next != NULL){
        browsesnake = browsesnake->next;
    }
    lastsegment=browsesnake->next;
    browsesnake->next = NULL;
    delete lastsegment;

}

void Eat(){   
    Segment * browsesnake = this->head;
    while (browsesnake->next != NULL){
        browsesnake = browsesnake->next;
    }
    int lastposx = browsesnake->GetPOS_X();
    int lastposy = browsesnake->GetPOS_Y();
    int lastdir = browsesnake->GetDIR();
    switch(lastdir){
        case UP:
        lastposy += 1;
        break;

        case DOWN:
        lastposy -= 1;
        break;

        case LEFT:
        lastposx += 1;
        break;

        case RIGHT:
        lastposx -=1;
        break;
    } 
    Segment * last_segment = new Segment(lastposx,lastposy,lastdir);
    browsesnake->next = last_segment;

}