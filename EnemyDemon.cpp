/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyDemon.h"

namespace zelda
{
namespace main
{

EnemyDemonRed::EnemyDemonRed(int xx, int yy) : EnemyImpl(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/DemonRed1-down-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/DemonRed2-down-32x32.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/DemonRed1-up-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/DemonRed2-up-32x32.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/DemonRed1-left-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/DemonRed2-left-32x32.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/DemonRed1-right-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/DemonRed2-right-32x32.bmp");	
}

EnemyDemonRed::~EnemyDemonRed()
{}

void EnemyDemonRed::doCollision(GameEngine const& engine, int fight)
{
	if (fight) {
		//_hitpoints -= 1;
	}
	//FIXME go mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);

}

}
}
