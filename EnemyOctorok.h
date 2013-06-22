/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYOCTOROK_H
#define _ENEMYOCTOROK_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

class EnemyOctorokRed : public EnemyImpl
{
public:
	EnemyOctorokRed(int xx, int yy);
	virtual ~EnemyOctorokRed();

	virtual void doCollision(GameEngine const& engine, int fight);

protected:
};

}
}

#endif
