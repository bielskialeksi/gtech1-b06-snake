#include "exercice1.hpp"
#include <SDL2/SDL.h>

#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

MainSDLWindow::MainSDLWindow(void){
    window = NULL;
    renderer = NULL;
}

MainSDLWindow::~MainSDLWindow(void){

}

int MainSDLWindow::Init(const char *name, int largeur,int hauteur){

    if (SDL_Init(SDL_INIT_VIDEO)<0)
    {
        cout << "Error: INIT() function failed";
        return EXIT_FAILURE;
    }

    this->window = SDL_CreateWindow( name , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , largeur,hauteur, SDL_WindowFlags());
    if (window == NULL) {
        cout << "Error: SDL-CreateWindow() failed";
        return EXIT_FAILURE;
    }

    this->renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        cout << "Error: SDL-CreateRenderer() failed";
        return EXIT_FAILURE;
    }


    SDL_SetRenderDrawColor(renderer,0,0,0, SDL_ALPHA_OPAQUE);



    return EXIT_SUCCESS;
}

SDL_Renderer * MainSDLWindow::GetRenderer(void){
    return this->renderer;
}

int main(void) {
    MainSDLWindow main_window;
    main_window.Init("salut", 200,200);
}



    Uint32 frame_rate = 20;
    Uint32 frame_time_start = SDL_GetTicks();
    void keyboard() {



        const Uint8 *keystates = SDL_GetKeyboardState(NULL);

        int x=0;
        int y=0;
        int move_x =0;
        int move_y =0;
        SDL_Rect();
        SDL_Rect r;
        r.x = 50;
        r.y = 50;
        r.w = 50;
        r.h = 50;

        if (keystates[SDL_SCANCODE_UP]) {
            move_x = 0;
            move_y =1;
        }
        if (keystates[SDL_SCANCODE_DOWN]) {
            move_x = 0;
            move_y =-1;
        }
        if (keystates[SDL_SCANCODE_LEFT]) {
            move_x = -1;
            move_y = 0;
        }
        if (keystates[SDL_SCANCODE_RIGHT]) {
            move_x = 1;
            move_y = 0;
        }
        SDL_Delay(SDL_GetTicks() - frame_time_start);
    }
    