#include <SDL2/SDL.h>
#include "playground.hpp"

using namespace std;

Playground::Playground(int nbrow ,int nbcol){

    this->nbcol = nbcol;
    this->nbrow = nbrow;

}

Playground::~Playground(){
}

Snake * Playground::GetSnake(){
    return this->litsnake;
}

void GenerateFruit(void){


    fruit_pos_x = NULL;
    fruit_pos_y = NULL;
    while(fruit_pos_x == NULL && fruit_pos_y == NULL){
        Segment * browsnake = this->litsnake->GetHead();
        fruit_pos_x = rand() %  this->nbcol+1;
        fruit_pos_y = rand() % this->nbrow+1;
        while (browsnake!= NULL || (fruit_pos_y!= NULL && fruit_pos_x != NULL)){
            if(browsnake->GetPOS_X()== fruit_pos_x && browsnake->GetPOS_Y()== fruit_pos_y ){
                fruit_pos_x = NULL;
                fruit_pos_y = NULL;
            }
            else{
                browsnake= browsnake->next;
            }
        }       
    }

    this->fruit = new Segment(fruit_pos_x,fruit_pos_y,0);
}


int Collide(){
    Segment * head_tpm = this->litsnake->GetHead() ;
    if ( head_tpm->GetPOS_X()<0 || head_tpm->GetPOS_Y()<0 || head_tpm->GetPOS_X()> this->nbcol || head_tpm->GetPOS_Y()> this->nbrow ){
        return 1;
    }
    return 0;
}

int GetScore(){
    return this->score;
}

void MeetFruit(void){

    Segment * head_tpm = this->litsnake->GetHead();
    if(head_tpm->GetPOS_X()== fruit_pos_x && head_tpm->GetPOS_Y()== fruit_pos_y ){
        this->score +=10;
        this->litsnake->Eat();
        delete this->fruit;
        GenerateFruit();
    }
}

int init(int dir){
    return 0;
}