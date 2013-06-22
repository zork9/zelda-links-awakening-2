/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYDEMON_H
#define _ENEMYDEMON_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

class EnemyDemonRed : public EnemyImpl
{
public:
	EnemyDemonRed(int xx, int yy);
	virtual ~EnemyDemonRed();

	void doCollision(GameEngine const& engine, int fight);

protected:
};

}
}

#endif
