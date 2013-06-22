/*
 Copyright (C) Johan Ceuppens 2011-2012
*/

#include "Statue1.h"
#include "Player.h"

namespace zelda
{
namespace main 
{

Statue1::Statue1(int xx, int yy, int ww, int hh) : Wall(xx,yy,ww,hh), _enemy(xx,yy,ww,hh)
{
	_enemy.addPicture((char *)"./Zelda/pics/statue1-20x31.bmp");
}

Statue1::~Statue1() {}


void Statue1::updateanddraw(SDL_Surface **screen)
{ _enemy.blitstatic(screen); }

}
}

