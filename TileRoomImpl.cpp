/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "TileRoomImpl.h"
#include <SDL/SDL_mutex.h>

namespace zelda
{
namespace main
{

TileRoomImpl::TileRoomImpl() : TileRoomInterface(), _tileroom()
{

	_tileroom.load();

}

TileRoomImpl::~TileRoomImpl()
{}

int TileRoomImpl::draw(SDL_Surface **screen)
{

	_tileroom.draw(screen);

	return 0;

}

/*
int TileRoomImpl::acceptvisitor(TileRoomImplVisitor& v)
{

	//###NOTE currentitem
	v.visit1(this);

}
*/

}
}
