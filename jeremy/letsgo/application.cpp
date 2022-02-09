#include <SDL2/SDL.h>
#include "application.hpp"
using namespace std;
Application::Application(){
    MainSDLWindow win ;
    this->win = new MainSDLWindow();
    this->win -> Init("SNAKE",500,500);
    this->pg = new Playground(500,500);
    this->frame_rate_ms = 20;
    this->pg->GenerateFruit();
    do
    {  
        Uint32 frame_time_start = SDL_GetTicks();

        SDL_Event event;
        if (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                this->win->clean();
                break;           
            }      
        } 

        if(this->pg->verif_MeetFruit()==1){
            this->pg->MeetFruit();
            draw_fruit();
        }
        this->pg->GetSnake()->Move();
        draw_snake();
   
        SDL_Delay(SDL_GetTicks() -frame_time_start);
    }while(this->pg->Collide()!=1 || this->pg->GetSnake()->Collide() != 1);
    
}

Application::~Application(){}

void Application::draw_fruit(){
    printf("1");
    SDL_SetRenderDrawColor( this->win->GetRenderer(), 255, 0, 0, 255 );
    SDL_Rect fruit;
    fruit.x = 0;
    fruit.y = 0;
    fruit.w =1; //taille d'une case
    fruit.h =1; //taille d'une case
    printf("2");
    SDL_RenderFillRect( this->win->GetRenderer(), &fruit );
    SDL_RenderClear(this->win->GetRenderer());
    printf("3");
}
void Application::draw_snake(){
    SDL_SetRenderDrawColor( this->win->GetRenderer(), 255, 0, 0, 255 );
    SDL_Rect snake;
    snake.x = this->pg->GetSnake()->GetHead()->GetPOS_X();
    snake.y = this->pg->GetSnake()->GetHead()->GetPOS_Y();
    snake.w =1; //taille d'une case
    snake.h =1; //taille d'une case
    SDL_RenderFillRect( this->win->GetRenderer(), &snake );
    SDL_RenderClear(this->win->GetRenderer());
}

int main(){

    Application * jeux = new Application();
    delete jeux;
}