/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "GameEngine.h"
#include "EnemyOctorok.h"
#include "EnemyMyconid.h"
#include "EnemyMyconidWizard.h"
#include "EnemyKnightRed.h"
#include "EnemyKnightGreen.h"
#include "EnemyDemon.h"
#include "EnemyDemon2.h"
#include "EnemyKnightBlue.h"
#include "Statue1.h"
#include "Wall.h"
#include "Exit.h"
#include "TileRoomImpl1.h"
#include "SDL.h"
//FIX usleep on linux/macosx
//#include <windows.h>
//FIX
//#include <winbase.h>
//#include <unistd.h>



namespace zelda
{
namespace main
{

void GameEngine::blitmoving(SDL_Surface **screen, SDL_Surface **_blanksurface)
{
	SDL_mutex *m = SDL_CreateMutex();

	SDL_LockMutex(m);
		updateanddraw(screen);
		_player.blit(screen);
		SDL_Flip(*screen);
		//SDL_BlitSurface (*_blanksurface,NULL,*screen,NULL);

	SDL_UnlockMutex(m);

}

void GameEngine::blitfight(SDL_Surface **screen, SDL_Surface **_blanksurface)
{
	SDL_mutex *m = SDL_CreateMutex();

	SDL_LockMutex(m);
		updateanddraw(screen);
		_player.blitfight(screen);
		SDL_Flip(*screen);
		//SDL_BlitSurface (*_blanksurface,NULL,*screen,NULL);

	SDL_UnlockMutex(m);

}

int GameEngine::collision(int fight)
{
	
	for (std::list<EntityInterface *>::iterator vi = _entities.begin(); vi != _entities.end(); vi++) {
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
	//  Sleep(10);
//###NOTE
//	usleep(10);
      SDL_Event event;
      //struct tms tmsstart;
      //clock_t start = times(&tmsstart);
      
    while ( SDL_PollEvent(&event) )
	{
	  	  
	  switch (event.type) {
	  case SDL_QUIT:{
	    
	//###NOTEexit(0);
	    //break
		return;
	  }
	  case SDL_KEYUP:{
	    switch (event.key.keysym.sym) { 
	    case SDLK_ESCAPE:{
	      //pause();
		//##NOTE	exit(0);
	      //break
		return;
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
	 //SDL_BlitSurface (_blanksurface,NULL,*screen,NULL);
	 
    }
  
  //endGame();
}


void GameEngine::updateanddraw(SDL_Surface **screen)
{
	_tileroom->draw(screen);
	updateanddrawentities(screen);
}

void GameEngine::updateanddrawentities(SDL_Surface **screen)
{
	for (std::list<EntityInterface *>::iterator vi = _entities.begin(); vi != _entities.end(); vi++)
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


	_tileroom = new TileRoomImpl1();
	//room.load();

	zelda::image::ImgSys imgsys;
	imgsys.load2((char *)"./Zelda/pics/room1-320x200.bmp", &_blanksurface);
	_entities.erase(_entities.begin(),_entities.end());
	_player.set_x(100);
	_player.set_y(100);
	//load walls

	_entities.push_back(new Wall(0,0,320,10));
	_entities.push_back(new Wall(0,0,10,200));
	_entities.push_back(new Wall(0,190,320,10));

	//load enemies
	_entities.push_back(new EnemyMyconidBlueWizard(100,30)); 
	_entities.push_back(new EnemyMyconidRed(100,30)); 
	_entities.push_back(new EnemyOctorokRed(100,130)); 
	_entities.push_back(new EnemyDemonRed(100,100)); 
	_entities.push_back(new EnemyDemonBlue(100,120));
	_entities.push_back(new EnemyKnightRed(30,120));
	
	//Statues
	_entities.push_back(new Statue1(100,40,20,31));
	_entities.push_back(new Statue1(100,140,20,31));
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
