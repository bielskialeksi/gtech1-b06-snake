#include <SDL2/SDL.h>
#include "application.hpp"
using namespace std;
Application::Application(){
    this->win = new MainSDLWindow();
    this->win -> Init("SNAKE",500,500);
    this->pg = new Playground(500,500);
    this->pg->GenerateFruit();
    while (true)
    {  
        if(this->pg->verif_MeetFruit()==1){
            this->pg->MeetFruit();
            draw_fruit();
        }
        if(this->pg->Collide()==1 || this->pg->GetSnake()->Collide()==1){
            break;
        }
        this->pg->GetSnake()->Move();
        draw_snake();
    }
    delete this->win ;
    delete this->pg;
}

Application::~Application(){}

void draw_fruit(){
    SDL_SetRenderDrawColor( this->win->GetRenderer(), 255, 0, 0, 255 );
    SDL_Rect fruit;
    fruit.x = 0;
    fruit.y = 0;
    fruit.w =// PAS; //taille d'une case
    fruit.h =// PAS; //taille d'une case
    SDL_RenderFillRect( this->win->GetRenderer(), &fruit );
    SDL_RenderClear(this->win->GetRenderer());
}
void draw_snake(){
    SDL_SetRenderDrawColor( this->win->GetRenderer(), 255, 0, 0, 255 );
    SDL_Rect snake;
    snake.x = this->pg->GetSnake()->GetHead()->GetPOS_X();
    snake.y = this->pg->GetSnake()->GetHead()->GetPOS_Y();
    snake.w =// PAS; //taille d'une case
    snake.h =// PAS; //taille d'une case
    SDL_RenderFillRect( this->win->GetRenderer(), &snake );
    SDL_RenderClear(this->win->GetRenderer());
}

void main(){
    new Application();
    delete Application();
}