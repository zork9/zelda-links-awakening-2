/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "EnemyImpl.h"

namespace zelda
{
namespace main
{

EnemyImpl::EnemyImpl(int xx, int yy) : EntityInterface(), _enemy(xx,yy,48,48)
{
}

EnemyImpl::~EnemyImpl()
{}

void EnemyImpl::updateanddraw(SDL_Surface **screen)
{

	if (_enemy.get_direction() == (char *)"left")
		_enemy.set_x(_enemy.get_x() - 1);
	else if (_enemy.get_direction() == (char *)"right")
		_enemy.set_x(_enemy.get_x() + 1);

	if (_enemy.get_x() > 200)
		_enemy.set_direction((char *)"left");
	if (_enemy.get_x() < 20)
		_enemy.set_direction((char *)"right");

	_enemy.blit(screen);

}

void EnemyImpl::doCollision(GameEngine const& engine, int fight)
{
	//FIXME god mode
	//const_cast<Player&>(player).setHitPoints(const_cast<Player&>(player).getHitPoints() - 1);

}

Entity* EnemyImpl::collision(Player const& player)
{
	return _enemy.collision(player);
}
}
}
