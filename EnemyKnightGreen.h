/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYKNIGHTGREEN_H
#define _ENEMYKNIGHTGREEN_H

#include "EnemyKnightRed.h"

namespace zelda
{
namespace main
{

class EnemyKnightGreen : public EnemyKnightRed
{
public:
	EnemyKnightGreen(int xx, int yy);
	virtual ~EnemyKnightGreen();

};

}
}

#endif
