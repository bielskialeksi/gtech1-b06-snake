#include "segment.hpp"
using namespace std;

Segment::Segment(int pos_x, int pos_y, int dir){
    this->pos_x=pos_x;
    this->pos_y=pos_y;
    this->dir=dir;
    this->next=NULL;
}

Segment::~Segment(void){
}

int Segment::GetPOS_X(void){
    return this->pos_x;

}

int Segment::GetPOS_Y(void){
    return this->pos_y;
}

int Segment::GetDIR(void){
    return this->dir;
}