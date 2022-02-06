#include <SDL2/SDL.h>
#include "playground.hpp"
using namespace std;

Playground::Playground(int nbrow ,int nbcol);{

    this->nbcol =nbcol;
    this->nbrow =nbrow;

}

Playground::~Playground(){
}

Snake * Playground::GetSnake(){


}

int Collide(){
    head_tpm = Snake.GetHead() 
    if ( head_tpm.GetPOS_X()<0 || head_tpm.GetPOS_Y()<0 || head_tpm.GetPOS_X()> this->nbcol || head_tpm.GetPOS_Y()> this->nbrow ){
        //si le head est different de 0<x<nbcol et 0<y<nbrow alors stop 
        //sinon rien 
    }
}

int GetScore(){
    //renvoie le score 
    /*proposition de code :

    return this->score;

    */
}

int MeetFruit(){

    //augmentation du score +
    /*
    head_tpm = Snake.GetHead()
    if(head_tpm.GetPOS_X()== fruit_pos_x && head_tpm.GetPOS_Y()== fruit_pos_y ){
        this->score +=10;
        Snake.Eat();
        delete fruit;
        GenerateFruit();
    }else{
        Snake.Move();
    }
    */
    

}

int Next(int dir){
    


}

void GenerateFruit(){
/*
    Segment * browsesnake = Snake.GetHead();
    do{
        fruit_pos_x = rand() % nbcol+1;
        fruit_pos_y = rand() % nbrow+1;
        while (browsesnake!= NULL || (fruit_pos_y== NULL && fruit_pos_x == NULL)){
            if(browsesnake.GetPOS_X()== fruit_pos_x && browsesnake.GetPOS_Y()== fruit_pos_y ){
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
*/
void init(int dir){



}