#include "snake.hpp"
#include "direction.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
using namespace std;

Snake::Snake(int pos_x, int pos_y, int dir){
    Segment *newSegment =  new Segment(pos_x, pos_y, dir);
}

Snake::~Snake(){
}

int Snake::Collide(){
    Segment head_tpm= GetHead();
    Segment * browsesnake = this->head;
    while(browsesnake->GetNext()!= NULL){
        if (this->head->GetPOS_X() == browsesnake->GetNext()->GetPOS_X() && this->head->GetPOS_Y() ==  browsesnake->GetNext()->GetPOS_Y()){
            return 1;
        }
        browsesnake = browsesnake->GetNext();
    }
    return 0;
}

Segment Snake::GetHead(){
    return *head;
}

int keyboard(int dir) {
    const Uint8 *keystates = SDL_GetKeyboardState(NULL);
    if (keystates[SDL_SCANCODE_UP]) {
        dir = UP;
        }
    if (keystates[SDL_SCANCODE_DOWN]){
        dir = DOWN;
    }
    if (keystates[SDL_SCANCODE_LEFT]){
        dir = LEFT;
    }
    if (keystates[SDL_SCANCODE_RIGHT]){
        dir = RIGHT;
    }
    return dir;
}

void Snake::Eat(){
    Segment * browsesnake = this->head;
    while (browsesnake->next != NULL){
        browsesnake = browsesnake->next;
    }
    int lastposx = browsesnake->GetPOS_X();
    int lastposy = browsesnake->GetPOS_Y();
    int lastdir = browsesnake->GetDir();
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

void Snake::Move(){
    int pos_x, pos_y;
    Segment * old_head = this->head;

    pos_x = old_head->GetPOS_X();
    pos_y = old_head->GetPOS_Y();
    int new_dir = keyboard(this->head->GetDir());
    if(new_dir != - this->head->GetDir()){
        this->head->SetDir(new_dir);
    }
    switch(new_dir){
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
    
    this->head = new Segment(pos_x, pos_y, new_dir); 
    if (old_head->next == NULL) delete old_head;
    else head->next = old_head;

    Segment * cur_head = this->head;
    while(cur_head->next != NULL) {
        cur_head = cur_head->next;
    }
    delete cur_head; 
}

int main(){
    return 0;
}

