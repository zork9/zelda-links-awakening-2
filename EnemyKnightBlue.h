/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _ENEMYKNIGHTBLUE_H
#define _ENEMYKNIGHTBLUE_H

#include "EnemyKnightRed.h"

namespace zelda
{
namespace main
{

class EnemyKnightBlue : public EnemyKnightRed
{
public:
	EnemyKnightBlue(int xx, int yy);
	virtual ~EnemyKnightBlue();

};

}
}

#endif
