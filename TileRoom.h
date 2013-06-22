#ifndef _TILEROOM_H_
#define _TILEROOM_H_

#include "Room.h"
#include <SDL/SDL.h>

namespace zelda
{
namespace main
{

class TileRoom : public Room
{
public:
	TileRoom(int tw, int th);
	virtual ~TileRoom();


	virtual int load();
	virtual int draw(SDL_Surface **screen);

protected:

int _tilewidth;
int _tileheight;
SDL_Surface **_surfaces;
};

}
}

#endif
