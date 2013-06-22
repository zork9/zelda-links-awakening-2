#include <SDL.h>
#include <iostream>
#include"ImgSys.h"
#include "Player.h"

using namespace std;

int main()
{


	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Surface *displaysurface = SDL_SetVideoMode(800,600,32,SDL_HWSURFACE);
	SDL_Rect displayrectangle;
	displayrectangle.x = 0;
	displayrectangle.y = 0;
	displayrectangle.w = 800;
	displayrectangle.h = 600;


	castlesdl::image::ImgSys imgsys;

	SDL_Surface *opening = NULL;
	imgsys.load("./pics/opening.jpg", &opening);
	for (;;) 
	{


			SDL_Event e;
			if (SDL_WaitEvent(&e)/*FIXME SDL_PollEvent(&e)*/) 
			{
				int xx, yy;
				Uint8 mousestate = SDL_GetMouseState(&xx, &yy);

				if (e.button.type == SDL_MOUSEBUTTONDOWN) 
				{
					break;
				}
				if (e.button.type == SDL_MOUSEBUTTONUP) 
				{
					break;
				}
			switch (e.type) {
			case SDL_QUIT:{
				goto looplabel1;
				break;
			}
			case SDL_KEYDOWN:{
				switch (e.key.keysym.sym){
				case SDLK_ESCAPE:{
					goto looplabel1;
					break;
				}
				case SDLK_BACKSPACE:{
					cout<<"backspace pressed\n"<<endl;
					goto looplabel1;
					break;
				}
				case SDLK_RETURN:{
					cout<<"return pressed\n"<<endl;
					goto looplabel1;
					break;
				}
				default:
					cout<<"key pressed\n"<<endl;
					goto looplabel1;
					break;
				}
				}
			}
	}
	SDL_BlitSurface (opening,&displayrectangle,displaysurface,NULL);
	SDL_Flip(displaysurface);
	}

looplabel1:	

	castlesdl::main::Player player(0,200);

	for (;;) 
	{


			SDL_Event e;
			if (SDL_WaitEvent(&e)/*FIXME SDL_PollEvent(&e)*/) 
			{
				int xx, yy;
				Uint8 mousestate = SDL_GetMouseState(&xx, &yy);

				if (e.button.type == SDL_MOUSEBUTTONDOWN) 
				{
				}
				if (e.button.type == SDL_MOUSEBUTTONUP) 
				{
				}
			switch (e.type) {
			case SDL_QUIT:{
				exit(0);
				break;
			}
			case SDL_KEYDOWN:{
				switch (e.key.keysym.sym){
				case SDLK_ESCAPE:{
					exit(0);
					break;
				}
				case SDLK_BACKSPACE:{
					cout<<"backspace pressed\n"<<endl;
					break;
				}
				case SDLK_RETURN:{
					cout<<"return pressed\n"<<endl;
					break;
				}
				case SDLK_LEFT:{
					cout<<"left pressed\n"<<endl;
					player.moveLeft();
					break;
				}
				case SDLK_RIGHT:{
					cout<<"right pressed\n"<<endl;
					player.moveRight();
					break;
				}
				default:
					cout<<"key pressed\n"<<endl;
					break;
				}
				}
			}
	}
	
	player.blit(&displaysurface);
	SDL_Flip(displaysurface);
	}	
}
