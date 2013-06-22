#ifndef _EXIT_H
#define _EXIT_H

#include "Entity.h"

namespace zelda
{
namespace main
{

class Exit : public Entity
{
public:
	Exit(int xx, int yy, int ww, int hh);
	virtual ~Exit();

	Entity *collision(int xx, int yy, int ww, int hh);
	void doCollision(GameEngine const& engine, int fight);

protected:
	
};

}
}

#endif