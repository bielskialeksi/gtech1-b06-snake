#include "fruit.hpp"

#include <SDL2/SDL.h>
#include <random>

#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

fruit::constructionfruit(void){
    MainSDLWindow main_window;
    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution<int> distr(0, 49);


        SDL_SetRenderDrawColor( main_window.GetRenderer(), 255, 0,0, 255);
        SDL_Rect fruit;
            fruit.x=distr(eng)*10;
            fruit.y=distr(eng)*10 +100;
            fruit.w=10;
            fruit.h=10;
        SDL_RenderFillRect( main_window.GetRenderer(), &fruit );
}