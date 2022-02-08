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
}

void GenerateFruit(){

    
    do{
        Segment * browsesnake = snake->GetHead();
        fruit_pos_x = rand() %  this->nbcol+1;
        fruit_pos_y = rand() % nbrow+1;
        while (browsesnake!= NULL || (fruit_pos_y!= NULL && fruit_pos_x != NULL)){
            if(browsesnake->GetPOS_X()== fruit_pos_x && browsesnake->GetPOS_Y()== fruit_pos_y ){
                fruit_pos_x = NULL;
                fruit_pos_y = NULL;
            }
            else{
                browsesnake= browsesnake->next;
            }
        }        
    }while(fruit_pos_x == NULL && fruit_pos_y == NULL);

    fruit = new Segment(fruit_pos_x,fruit_pos_y);
}


int Collide(){
    Segment * head_tpm = this->snake->GetHead() ;
    if ( head_tpm->GetPOS_X()<0 || head_tpm->GetPOS_Y()<0 || head_tpm->GetPOS_X()> this->nbcol || head_tpm->GetPOS_Y()> this->nbrow ){
        return 1;
    }
    return 0;
}

int GetScore(){
    return this->score;
}

void MeetFruit(void){

    Segment * head_tpm = snake->GetHead();
    if(head_tpm->GetPOS_X()== fruit_pos_x && head_tpm->GetPOS_Y()== fruit_pos_y ){
        this->score +=10;
        snake->Eat();
        delete fruit;
        GenerateFruit();
    }
    else{
        snake->Move();
    }
}

int Next(int dir){
    return 0;
}
int init(int dir){
    return 0;
}