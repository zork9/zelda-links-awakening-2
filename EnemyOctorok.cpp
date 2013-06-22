/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyOctorok.h"

namespace zelda
{
namespace main
{

EnemyOctorokRed::EnemyOctorokRed(int xx, int yy) : EnemyImpl(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/octorok1-down-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/octorok2-down-32x32.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/octorok1-up-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/octorok2-up-32x32.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/octorok1-left-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/octorok2-left-32x32.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/octorok1-right-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/octorok2-right-32x32.bmp");	
}

EnemyOctorokRed::~EnemyOctorokRed()
{}

void EnemyOctorokRed::doCollision(GameEngine const& engine, int fight)
{
	if (fight) {
	//	_hitpoints -= 1;
	}
	//FIXME go mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);

}

}
}
