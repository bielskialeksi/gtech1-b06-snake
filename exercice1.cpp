#include "exercice1.hpp"
#include <SDL2/SDL.h>

#include <string>

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

int MainSDLWindow::Init(string title_window, int largeur,int hauteur){
    window = SDL_CreateWindow( "title_window" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , largeur,hauteur, SDL_WindowFlags());
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer,0,0,0, SDL_ALPHA_OPAQUE);

    if (window == NULL)
    {

        cout << "Error: SDL-CreateWindow() failed \n";
        return EXIT_FAILURE;
    }

    if (SDL_Init(SDL_INIT_VIDEO)<0)
    {
        cout << "Error: INIT() function failed \n";
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

SDL_Renderer * MainSDLWindow::GetRenderer(void){
    return this->renderer;
}

int main(void) {
    MainSDLWindow main_window;
    main_window.Init("salut", 200,200);
}