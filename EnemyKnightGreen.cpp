/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyKnightGreen.h"

namespace zelda
{
namespace main
{

EnemyKnightGreen::EnemyKnightGreen(int xx, int yy) : EnemyKnightRed(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/knightgreen1-down-48x48.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/knightgreen2-down-48x48.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/knightgreen1-up-48x48.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/knightgreen2-up-48x48.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/knightgreen1-left-48x48.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/knightgreen2-left-48x48.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/knightgreen1-right-48x48.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/knightgreen2-right-48x48.bmp");	
}

EnemyKnightGreen::~EnemyKnightGreen()
{}

}
}
