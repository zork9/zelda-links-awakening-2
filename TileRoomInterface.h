/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _TILEROOMINTERFACE_H
#define _TILEROOMINTERFACE_H

#include "SDL.h"

namespace zelda
{
namespace main
{

class TileRoomInterface
{
public:
	TileRoomInterface() {}
	virtual ~TileRoomInterface() {}

	virtual int draw(SDL_Surface **screen) = 0;
};

}
}

#endif
