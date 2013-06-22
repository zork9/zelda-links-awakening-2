/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef STATUE1_H
#define STATUE1_H


#include "Entity.h"
#include "Wall.h"

namespace zelda
{
namespace main 
{

class Statue1 : public Wall 
{
	public:
		Statue1(int xx, int yy, int ww, int hh);
		virtual ~Statue1();
		
		virtual void updateanddraw(SDL_Surface **screen);

protected:
	Enemy _enemy;
};
}
}

#endif



