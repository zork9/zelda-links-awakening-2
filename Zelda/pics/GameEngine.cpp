/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "GameEngine.h"
#include "Wall.h"
#include "Exit.h"
#include<iostream>
#include "../SDL.h"
#include <windows.h>
#include <winbase.h>

namespace zelda
{
namespace main
{

void GameEngine::blitmoving(SDL_Surface **screen, SDL_Surface **_blanksurface)
{
		updateanddraw(screen);
		_player.blit(screen);
		SDL_Flip(*screen);
		SDL_BlitSurface (*_blanksurface,NULL,*screen,NULL);
}

void GameEngine::blitfight(SDL_Surface **screen, SDL_Surface **_blanksurface)
{
		updateanddraw(screen);
		_player.blitfight(screen);
		SDL_Flip(*screen);
		SDL_BlitSurface (*_blanksurface,NULL,*screen,NULL);
}

int GameEngine::collision(int fight)
{
	
	for (std::list<Entity *>::iterator vi = _entities.begin(); vi != _entities.end(); vi++) {
		Entity *collider = (Entity *)0;

		if ((collider = (*vi)->collision(_player)) != (Entity *)0) {
			collider->doCollision(*this, fight);
			if (fight) 
				_entities.erase(vi);
			
			return 1;		
		}
	}
	return 0;
}


void GameEngine::doLoop(SDL_Surface **screen)
{
  /*
   * fixme: put calibrating code in bogus loops
   */
  //double time = 0.0;
  //int ticks = 0;
  //int sleeptime = 0;
  //int fps = FPS;
  //int xv = 0, yv = 0, shoot = 0;
	

  Uint8 *keystate;
  int done=0;
  while(done == 0)
    {
	  Sleep(10);
      SDL_Event event;
      //struct tms tmsstart;
      //clock_t start = times(&tmsstart);
      
    while ( SDL_PollEvent(&event) )
	{
	  	  
	  switch (event.type) {
	  case SDL_QUIT:{
	    exit(0);
	    break;
	  }
	  case SDL_KEYUP:{
	    switch (event.key.keysym.sym) { 
	    case SDLK_ESCAPE:{
	      //pause();
			exit(0);
	      break;
	    }
	    case SDLK_q:{
	      //pause();
	    break;
	    }
	    case SDLK_n:{
	      //load_next_level();
	      break;
	    }

	    }
	  }
	  }
	}
      
      keystate = SDL_GetKeyState(NULL);
      if (keystate[SDLK_SPACE]) {
		if (!collision(1)) {
			//_player.fight(screen);
		}
		blitfight(screen, &_blanksurface);
		continue;
      }
      
      if ( keystate[SDLK_UP] ) {
		if (!collision(0))
			_player.moveUp();
		else
			_player.undoMove();
		blitmoving(screen, &_blanksurface);
		continue;
	  }
      if (keystate[SDLK_DOWN]){
		if (!collision(0))
			_player.moveDown();
		else
			_player.undoMove();
		blitmoving(screen, &_blanksurface);
		continue;
	  }
      if ( keystate[SDLK_LEFT] ) {
		if (!collision(0))
			_player.moveLeft();
		else
			_player.undoMove();
		blitmoving(screen, &_blanksurface);
		continue;
	  }
	  if (keystate[SDLK_RIGHT]) {
		if (!collision(0))
			_player.moveRight();
		else
			_player.undoMove();
		blitmoving(screen, &_blanksurface);
		continue;
      }
   
	  updateanddraw(screen);
	 _player.blitstatic(screen);
	 SDL_Flip(*screen);
	 SDL_BlitSurface (_blanksurface,NULL,*screen,NULL);
	 
    }
  
  //endGame();
}


void GameEngine::updateanddraw(SDL_Surface **screen)
{
	updateanddrawentities(screen);
}

void GameEngine::updateanddrawentities(SDL_Surface **screen)
{
	for (std::list<Entity *>::iterator vi = _entities.begin(); vi != _entities.end(); vi++)
	{
		(*vi)->updateanddraw(screen);
	}
}

void GameEngine::loadNextRoom()
{
	if (_roomid == 1)
		loadRoom2();
	else if (_roomid == 2)
		;

}

void GameEngine::loadRoom1()
{
	_roomid = 1;

	zelda::image::ImgSys imgsys;
	imgsys.load("./Zelda/pics/room1-320x200.bmp", &_blanksurface);
	_entities.erase(_entities.begin(),_entities.end());
	_player.set_x(100);
	_player.set_y(100);
	//load walls

	_entities.push_back(new Wall(0,0,320,10));
	_entities.push_back(new Wall(0,0,10,200));
	_entities.push_back(new Wall(0,190,320,10));

	//load enemies
	_entities.push_back(new EnemyDemonRed(100,100)); 
	_entities.push_back(new EnemyDemonBlue(100,120));

	//load exits
	_entities.push_back(new Exit(310,0,10,200));
}

void GameEngine::loadRoom2()
{
	_roomid = 2;

	_entities.erase(_entities.begin(),_entities.end());

	//_entities.push_back(new EnemyDemonRed(100,100)); 
	//_entities.push_back(new EnemyDemonBlue(10,10));

}

}
}