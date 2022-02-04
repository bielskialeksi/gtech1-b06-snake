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
    if (Snake.GetHead() ...){
        //si le head est different de 0<x<nbcol et 0<y<nbrow alors stop 
        //sinon rien 

    }
}

int GetScore(){
    //-->creer une variable score
    //renvoie le score 
    /*proposition de code :

    return this->score;

    */
}

int MeetFruit(){

    //augmentation du score +
    Snake.Eat();

}

int Next(int dir){



}

void GenerateFruit(){



}

void init(int dir){



}