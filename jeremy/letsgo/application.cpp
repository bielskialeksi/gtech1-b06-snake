#include <SDL2/SDL.h>
#include "application.hpp"
using namespace std;
Application::Application(){
    this->win = new MainSDLWindow();
    this->win -> Init("...",500,500);
    this->pg = new Playground(500,500);
    while (true)
    {
        
        this->pg->GenerateFruit();
        this->pg->MeetFruit();
        if(this->pg->Collide()==1 || this->pg->GetSnake()->Collide()==1){
            break;
        }
        this->pg->GetSnake()->Move();
    }
    delete this->win ;
    delete this->pg;
}

Application::~Application(){}