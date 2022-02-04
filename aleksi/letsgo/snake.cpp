#include <SDL2/SDL.h>
#include "snake.hpp"
using namespace std;

Snake::Snake(){
    Segment *newSegment =  new Segment(int pos_x,int pos_y,int dir);
}

Snake::~Snake(){
}

Segment * Snake::GetHead(){
    return this-> head;
}

int Snake::Collide(){

    //recupere le head du snake et regarde si il ne touche pas sa tail 
    
    //proposition de code :
    /*head_tpm= Gethead();
    for (this->tail ){
        #but de la demarche: recuperer chaque segment composant la tail

        if (head_tpm.GetPOS_X()== tail.GetPOS_X() && head_tpm.GetPOS_Y()== tail.GetPOS_Y()){

            //le snake a touvhée sa tail alors return lose

        }
        //else rien 
    }
    */

}

int Move(){
    DeleteLast();
    GrowFront();
}

int GrowFront(){
    this->head = new Segment(int pos_x,int pos_y,int dir)
}
int DeleteLast(){
    //delete le dernier 
    //utiliser la fonction -->delete
}

int Eat(){

    GrowFront();

}