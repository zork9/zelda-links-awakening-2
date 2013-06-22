/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMY_H
#define _ENEMY_H

#include "Entity.h"

namespace zelda
{
namespace main
{
class Player;

class Enemy : public Entity
{
public:
	Enemy(int xx, int yy, int ww, int hh);
	virtual ~Enemy();

	void moveLeft();
	void moveRight();
	void moveDown();
	void moveUp();
	void undoMove();

	Entity* collision(Player const& player);
	void addPictureUp(char * filename);
	void addPictureDown(char * filename);
	void addPictureLeft(char * filename);
	void addPictureRight(char * filename);
	void addFightPictureUp(char * filename);
	void addFightPictureDown(char * filename);
	void addFightPictureLeft(char * filename);
	void addFightPictureRight(char * filename);
	void blit(SDL_Surface **screen);
	void blitfight(SDL_Surface **screen);

	inline char * get_direction() { return _direction; } 
	inline void set_direction(char * dir) {  _direction = dir; } 
	
protected:

	char * _direction;
	int _fightsurfacesindex;
	std::vector<SDL_Surface *> _upsurfaces;
	std::vector<SDL_Surface *> _leftsurfaces;
	std::vector<SDL_Surface *> _rightsurfaces;

	std::vector<SDL_Surface *> _fightupsurfaces;
	std::vector<SDL_Surface *> _fightdownsurfaces;
	std::vector<SDL_Surface *> _fightleftsurfaces;
	std::vector<SDL_Surface *> _fightrightsurfaces;
};

}
}

#include "Player.h"

#endif
