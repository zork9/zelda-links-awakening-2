/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef _TILEROOMIMPL1_H
#define _TILEROOMIMPL1_H

#include "TileRoomImpl.h"
#include "TileRoomImplVisitor.h"
#include "TileRoom1.h"
#include "TileRoomInterface.h"

namespace zelda
{
namespace main
{
//Red Knight
class TileRoomImpl1 : public TileRoomImpl
{
public:
	TileRoomImpl1();
	virtual ~TileRoomImpl1();

	virtual int draw(SDL_Surface **screen);
	virtual int acceptvisitor(TileRoomImplVisitor& v);

protected:
	TileRoom1 _tileroom;
};

}
}

#endif
