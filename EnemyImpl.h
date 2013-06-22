/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYIMPL_H
#define _ENEMYIMPL_H

#include "Enemy.h"
#include "EntityInterface.h"

namespace zelda
{
namespace main
{
class GameEngine;
//Red Knight
class EnemyImpl : public EntityInterface
{
public:
	EnemyImpl(int xx, int yy);
	virtual ~EnemyImpl();

	virtual void updateanddraw(SDL_Surface **screen);
	virtual void doCollision(GameEngine const& engine, int fight);
	virtual Entity* collision(Player const& player);

protected:
	Enemy _enemy;
};

}
}

#endif
