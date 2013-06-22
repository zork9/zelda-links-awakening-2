/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYKNIGHT_H
#define _ENEMYKNIGHT_H

#include "EnemyImpl.h"

namespace zelda
{
namespace main
{
class GameEngine;
//Red KnightRed
class EnemyKnightRed : public EnemyImpl
{
public:
	EnemyKnightRed(int xx, int yy);
	virtual ~EnemyKnightRed();

};

}
}

#endif
