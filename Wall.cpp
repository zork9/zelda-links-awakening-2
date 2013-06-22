/*
 Copyright (C) Johan Ceuppens 2011-2012
*/

#include "Wall.h"
#include "Player.h"

namespace zelda
{
namespace main 
{

Wall::Wall(int xx, int yy, int ww, int hh) : EntityInterface(), _enemy(xx,yy,ww,hh)
{}

Wall::~Wall() {}


Entity* Wall::collision(Player const& player)
{
	int xx = const_cast<Player&>(player).get_x();
	int yy = const_cast<Player&>(player).get_y();
	int ww = const_cast<Player&>(player).get_w();
	int hh = const_cast<Player&>(player).get_h();
	if (xx > _enemy.get_x() && xx < _enemy.get_x() + _enemy.get_w() && yy > _enemy.get_y() && yy < _enemy.get_y() + _enemy.get_h())
		return (&_enemy);
	else
		return (Entity *)0;
	
}

void Wall::doCollision(GameEngine const& engine, int fight)
{/*empty*/}

void Wall::updateanddraw(SDL_Surface **screen)
{/*empty*/}

}
}
