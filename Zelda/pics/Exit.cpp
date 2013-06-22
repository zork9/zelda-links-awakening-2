#include "Exit.h"
#include "GameEngine.h"

namespace zelda
{
namespace main
{

Exit::Exit(int xx, int yy, int ww, int hh) : Entity(xx,yy,ww,hh)
{}

Exit::~Exit()
{}

Entity *Exit::collision(int xx, int yy, int ww, int hh)
{
	if (xx > _x && xx < _x + _w && yy > _y && yy < _y + _h)
		return (this);
	else
		return (Entity *)0;
}

void Exit::doCollision(GameEngine const& engine, int fight)
{

	if (fight)
		return;
	else {
		const_cast<GameEngine&>(engine).loadNextRoom();
	}

}


}
}
