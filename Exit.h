#ifndef _EXIT_H
#define _EXIT_H

#include "EntityInterface.h"
#include "Enemy.h"

namespace zelda
{
namespace main
{
class Player;

class Exit : public EntityInterface
{
public:
	Exit(int xx, int yy, int ww, int hh);
	virtual ~Exit();

	Entity *collision(Player const& player);
	void doCollision(GameEngine const& engine, int fight);
	void updateanddraw(SDL_Surface **screen);

protected:
	Enemy _enemy;	
};

}
}

#endif
