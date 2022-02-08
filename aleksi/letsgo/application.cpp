#include <SDL2/SDL.h>
#include "application.hpp"
using namespace std;
Application::Application(){
    this->win = new MainSDLWindow();
    win -> Init("...",500,500);
    this->pg = new Playground(500,500);

}

Application::~Application(){}