/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyKnightBlue.h"

namespace zelda
{
namespace main
{

EnemyKnightBlue::EnemyKnightBlue(int xx, int yy) : EnemyKnightRed(xx,yy)
{
	_enemy.addPictureDown((char *)"./Zelda/pics/knightblue1-down-48x48.bmp");
	_enemy.addPictureDown((char *)"./Zelda/pics/knightblue2-down-48x48.bmp");

	_enemy.addPictureUp((char *)"./Zelda/pics/knightblue1-up-48x48.bmp");
	_enemy.addPictureUp((char *)"./Zelda/pics/knightblue2-up-48x48.bmp");

	_enemy.addPictureLeft((char *)"./Zelda/pics/knightblue1-left-48x48.bmp");
	_enemy.addPictureLeft((char *)"./Zelda/pics/knightblue1-left-48x48.bmp");

	_enemy.addPictureRight((char *)"./Zelda/pics/knightblue1-right-48x48.bmp");
	_enemy.addPictureRight((char *)"./Zelda/pics/knightblue1-right-48x48.bmp");//NOTE 1	
}

EnemyKnightBlue::~EnemyKnightBlue()
{}

}
}
