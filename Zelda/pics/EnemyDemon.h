/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYDEMON_H
#define _ENEMYDEMON_H

#include "Enemy.h"

namespace zelda
{
namespace main
{

class EnemyDemonRed : public Enemy
{
public:
	EnemyDemonRed(int xx, int yy);
	virtual ~EnemyDemonRed();
	
	virtual void updateanddraw(SDL_Surface **screen);
	virtual void doCollision(GameEngine const& engine, int fight);

protected:
	int _count1, _count2;
	unsigned long _hitpoints;
};

}
}

#endif