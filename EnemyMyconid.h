/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYMYCONID_H
#define _ENEMYMYCONID_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

class EnemyMyconidRed : public EnemyImpl
{
public:
	EnemyMyconidRed(int xx, int yy);
	virtual ~EnemyMyconidRed();

	virtual void doCollision(GameEngine const& engine, int fight);

protected:
};

}
}

#endif
