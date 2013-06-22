/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyMyconid.h"

namespace zelda
{
namespace main
{

EnemyMyconidRed::EnemyMyconidRed(int xx, int yy) : EnemyImpl(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/myconid1-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/myconid2-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/myconid3-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/myconid4-32x32.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/myconid1-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/myconid2-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/myconid3-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/myconid4-32x32.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/myconid1-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/myconid2-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/myconid3-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/myconid4-32x32.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/myconid1-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/myconid2-32x32.bmp");	
	_enemy.addPictureRight((char *)"./Zelda/pics/myconid3-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/myconid4-32x32.bmp");	
}

EnemyMyconidRed::~EnemyMyconidRed()
{}


void EnemyMyconidRed::doCollision(GameEngine const& engine, int fight)
{
	if (fight) {
//		_hitpoints -= 1;
	}
	//FIXME go mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);

}

}
}
