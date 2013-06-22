#include "Exit.h"
#include "GameEngine.h"

namespace zelda
{
namespace main
{

Exit::Exit(int xx, int yy, int ww, int hh) : _enemy(xx,yy,ww,hh),EntityInterface()
{}

Exit::~Exit()
{}

//FIXME Entity& return
Entity *Exit::collision(Player const& player)
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

void Exit::doCollision(GameEngine const& engine, int fight)
{

	if (fight)
		return;
	else {
	//FIXME	const_cast<GameEngine&>(engine).loadNextRoom();
	}

}

void Exit::updateanddraw(SDL_Surface **screen)
{/*empty*/}

}
}
