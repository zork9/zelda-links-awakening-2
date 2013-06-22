/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENTITYINTERFACE_H
#define _ENTITYINTERFACE_H

#include "SDL.h"

namespace zelda
{
namespace main
{
class Player;
class Entity;
class GameEngine;

class EntityInterface
{
public:
	EntityInterface() {}
	virtual ~EntityInterface() {}

	virtual void updateanddraw(SDL_Surface **screen) = 0;
	virtual Entity* collision(Player const& player) = 0;
	virtual void doCollision(GameEngine const& engine, int fight) = 0;
};

}
}

#include "Player.h"

#endif
