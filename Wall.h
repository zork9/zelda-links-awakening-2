/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef WALL_H
#define WALL_H


#include "EntityInterface.h"
#include "Enemy.h"

namespace zelda
{
namespace main 
{

using namespace std;

class Wall : public EntityInterface
{
	public:
		Wall(int xx, int yy, int ww, int hh);
		virtual ~Wall();
		
		virtual Entity* collision(Player const& player);
		virtual void doCollision(GameEngine const& engine, int fight);
		virtual void updateanddraw(SDL_Surface **screen);

	protected:
		Enemy _enemy;
};
}
}

#endif



