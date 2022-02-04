
#include "snake.hpp"
using namespace std;

Snake::Snake(int pos_x,int pos_y,int dir){
    Segment *newSegment =  new Segment(int pos_x,int pos_y,int dir);
}

Snake::~Snake(){
}

Segment * Snake::GetHead(){
    return this-> head;
}

int Snake::Collide(){


    head_tpm= Gethead();
    Segment * browsesnake = this->head;
    while(browsesnake->next->next != NULL){
        if (head_tpm.GetPOS_X() == browsesnake->next.GetPOS_X() && head_tpm.GetPOS_Y() ==  browsesnake->next.GetPOS_Y()){

            //le snake a touvhée sa tail alors return lose
        }else{
             browsesnake = browsesnake->next;
        }
    }
}

int Move(){
    GrowFront();
    DeleteLast();
    
}

int Snake::GrowFront(int pos_x,int pos_y,int dir){

    int pos_x, pos_y;
    Segment *old_head = this->head;
    
    // -- use "dir + old_head" -> pos_x, pos_y;
    pos_x = old_head->pos_x;
    pos_y = old_head->pos_y;
    switch(dir){
        case UP:
        pos_y -= 1;
        break;
    } // --
    
    this->head = new Segment(pos_x, pos_y); // dir utilie dans le constructeur?
    if (old_head->next == NULL) delete old_head;
    else head->next = old_head;

    Segment* cur_head = this->head;
    while(cur_head->next != NULL) {
        cur_head = cur_head->next;
    }
    delete cur_head;
}

void DeleteLast_2(Segment* seg){
    if(seg->next == NULL)
}

int DeleteLast(){
    
    Segment * browsesnake = this->head;
    Segment * lastsegment = NULL;
    while (browsesnake->next->next != NULL){
        browsesnake = browsesnake->next;
    }
    lastsegment=browsesnake->next;
    browsesnake->next = NULL;
    delete lastsegment;
    
}

int Eat(){
    
    

}