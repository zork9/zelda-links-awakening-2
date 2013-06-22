/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyKnightRed.h"

namespace zelda
{
namespace main
{

EnemyKnightRed::EnemyKnightRed(int xx, int yy) : EnemyImpl(xx,yy)
{

	_enemy.addPictureDown((char *)"./Zelda/pics/knight1-down-48x48.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/knight2-down-48x48.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/knight1-up-48x48.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/knight2-up-48x48.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/knight1-left-48x48.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/knight2-left-48x48.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/knight1-right-48x48.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/knight2-right-48x48.bmp");	

}

EnemyKnightRed::~EnemyKnightRed()
{}

}
}
