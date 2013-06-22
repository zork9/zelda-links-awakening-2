#ifndef _ROOM_H_
#define _ROOM_H_

#include <SDL/SDL.h>

namespace zelda
{
namespace main
{

class Room 
{
public:
	Room();
	virtual ~Room();

protected:
	int _screenwidth;
	int _screenheight;


public:

//	virtual int draw(SDL_Surface **screen);
};

}
}

#endif
