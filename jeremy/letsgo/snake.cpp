#include "snake.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

Snake::Snake(int pos_x, int pos_y, int dir){
    Segment *newSegment =  new Segment(pos_x, pos_y, dir);


}

Snake::~Snake(){
}

int Snake::Collide(){

}

Segment Snake::GetHead(){
    return *head;
}


//#define UP -1
//#define DOWN 1
//#define LEFT -2
//#define RIGHT 2

// dir = UP;
// new_dir = keyboard();
// if(new_dir != - dir)
//   dir = new_dir;
//else
//  dir = dir;

int Snake::DeleteLast(){
    Segment * browsesnake = this->head;
    Segment * lastsegment = NULL;
    while (browsesnake->next->next != NULL){
        browsesnake = browsesnake->next;
    }
    lastsegment = browsesnake->next;
    browsesnake->next = NULL;
    delete lastsegment;
}

int Snake::GrowFront(){
    // int pos_x, pos_y;
    // Segment old_head = this->head;

    // // -- use "dir + old_head" -> pos_x, pos_y;
    // pos_x = old_head->pos_x;
    // pos_y = old_head->pos_y;
    // switch(dir){
    //     case UP:
    //     pos_y -= 1;
    //     break;
    // } // --

    // this->head = new Segment(pos_x, pos_y); // dir utilie dans le constructeur?
    // if (old_head->next == NULL) delete old_head;
    // else head->next = old_head;

    // Segment cur_head = this->head;
    // while(cur_head->next != NULL) {
    //     cur_head = cur_head->next;
    // }
    // delete cur_head; 
}

int Snake::Move(){
    DeleteLast();
    GrowFront();
}



