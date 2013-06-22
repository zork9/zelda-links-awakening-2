/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _TILEROOMIMPL_H
#define _TILEROOMIMPL_H

#include "TileRoom.h"
#include "TileRoom1.h"
#include "TileRoomInterface.h"

namespace zelda
{
namespace main
{
//Red Knight
class TileRoomImpl : public TileRoomInterface
{
public:
	TileRoomImpl();
	virtual ~TileRoomImpl();

	virtual int draw(SDL_Surface **screen);
	//////virtual int acceptvisitor(TileRoomImplVisitor& v);

protected:
	TileRoom1 _tileroom;
};

}
}

#endif
