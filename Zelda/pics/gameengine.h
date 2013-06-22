#ifndef _GAMEENGINE_H_
#define _GAMEENGINE_H_

/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "Player.h"
#include "EnemyDemon.h"
#include "EnemyDemon2.h"

#include<list>

namespace zelda 
{
namespace main
{

class GameEngine
{
public: 
	GameEngine() : _player(0,0,32,32,20), _entities(), _roomid(1) { 
		zelda::image::ImgSys imgsys;
		imgsys.load("./Zelda/pics/blank-800x600.bmp", &_blanksurface);
		loadRoom1(); 
	}
	virtual ~GameEngine() {}

	void doLoop(SDL_Surface **screen);
	void updateanddraw(SDL_Surface **screen);
	void blitmoving(SDL_Surface **screen, SDL_Surface **blanksurface);
	int collision(int fight);
	void blitfight(SDL_Surface **screen, SDL_Surface **blanksurface);
	void removeEntity(Entity *e);

	void loadNextRoom();
	void loadRoom1();
	void loadRoom2();

private:

	void updateanddrawentities(SDL_Surface **screen);
	

	Player _player;
	std::list<Entity *> _entities;
	SDL_Surface *_blanksurface;
	int _roomid;
};

}
}

#endif