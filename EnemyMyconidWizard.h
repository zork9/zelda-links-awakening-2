/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYMYCONIDWIZ_H
#define _ENEMYMYCONIDWIZ_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

class EnemyMyconidBlueWizard : public EnemyImpl
{
public:
	EnemyMyconidBlueWizard(int xx, int yy);
	virtual ~EnemyMyconidBlueWizard();

	virtual void doCollision(GameEngine const& engine, int fight);

protected:
};

}
}

#endif
