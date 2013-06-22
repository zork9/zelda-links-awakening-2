/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYDEMON2_H
#define _ENEMYDEMON2_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

class EnemyDemonBlue : public EnemyImpl
{
public:
	EnemyDemonBlue(int xx, int yy);
	virtual ~EnemyDemonBlue();

	virtual void doCollision(GameEngine const& engine, int fight);

protected:
};

}
}

#endif
