/*
 Copyright (C) Johan Ceuppens 2011
*/

#include "SDL.h"
#include<vector>
#include "Player.h"
#include "GameEngine.h"

int main(int argc, char *argv[])
{
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Surface *screen  = SDL_SetVideoMode(320, 200, 32, SDL_DOUBLEBUF|SDL_HWSURFACE);

zelda::main::GameEngine gameengine;
SDL_Flip(screen);
gameengine.doLoop(&screen);
	
return 0;
}
