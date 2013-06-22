/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyMyconidWizard.h"

namespace zelda
{
namespace main
{

EnemyMyconidBlueWizard::EnemyMyconidBlueWizard(int xx, int yy) : EnemyImpl(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/myconidwizard1-32x32.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/myconidwizard2-32x32.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/myconidwizard1-32x32.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/myconidwizard2-32x32.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/myconidwizard1-32x32.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/myconidwizard2-32x32.bmp");
	
	_enemy.addPictureRight((char *)"./Zelda/pics/myconidwizard1-32x32.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/myconidwizard2-32x32.bmp");	
}

EnemyMyconidBlueWizard::~EnemyMyconidBlueWizard()
{}

void EnemyMyconidBlueWizard::doCollision(GameEngine const& engine, int fight)
{
	if (fight) {
//		_hitpoints -= 1;
	}
	//FIXME go mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);

}

}
}
