/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyDemon2.h"

namespace zelda
{
namespace main
{

EnemyDemonBlue::EnemyDemonBlue(int xx, int yy) : EnemyImpl(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/DemonBlue1-down-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/DemonBlue2-down-32x32.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/DemonBlue1-up-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/DemonBlue2-up-32x32.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/DemonBlue1-left-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/DemonBlue2-left-32x32.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/DemonBlue1-right-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/DemonBlue2-right-32x32.bmp");	
}

EnemyDemonBlue::~EnemyDemonBlue()
{}

void EnemyDemonBlue::doCollision(GameEngine const& engine, int fight)
{
	if (fight) {
		//_hitpoints -= 1;
	}

	//FIXME god mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);
}

}
}
