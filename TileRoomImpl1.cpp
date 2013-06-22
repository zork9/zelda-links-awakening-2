/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "TileRoomImpl1.h"
#include <SDL/SDL_mutex.h>

namespace zelda
{
namespace main
{

TileRoomImpl1::TileRoomImpl1() : _tileroom()
{

	_tileroom.load();

}

TileRoomImpl1::~TileRoomImpl1()
{}

int TileRoomImpl1::draw(SDL_Surface **screen)
{

	_tileroom.draw(screen);

	return 0;

}

int TileRoomImpl1::acceptvisitor(TileRoomImplVisitor& v)
{

	//###NOTE currentitem
	v.visit1(this);

}

}
}
