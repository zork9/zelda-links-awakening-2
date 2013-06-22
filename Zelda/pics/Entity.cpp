/*
 Copyright (C) Johan Ceuppens 2011-2012
*/

#include "Entity.h"

#include"../SDL.h"
#include<string>

#include<list>

#include"Img.h"
#include"ImgSys.h"

namespace zelda
{
namespace main 
{
using namespace std;

Entity::Entity(int xx, int yy, int ww, int hh)
{ _x = xx; _y = yy; _w = ww; _h = hh; _surfacesindex = 0; }

Entity::~Entity() {}

void Entity::moveLeft()
{
	_x += -1;
}

void Entity::moveRight()
{
	_x += 1;
}

void Entity::moveDown()
{
	_y += -1;
}

void Entity::moveUp()
{
	_y += 1;
}


void Entity::blit(SDL_Surface **screen)
{ 
	if (_surfacesindex >= _surfaces.size())
		_surfacesindex = 0;

	SDL_Rect rectangle;
	rectangle.x = _x;
	rectangle.y = _y;
	rectangle.w = _w;
	rectangle.h = _h;
	SDL_BlitSurface (_surfaces[_surfacesindex],NULL,*screen,&rectangle);

	_surfacesindex++;

}

void Entity::blitstatic(SDL_Surface **screen)
{ 

	SDL_Rect rectangle;
	rectangle.x = _x;
	rectangle.y = _y;
	rectangle.w = _w;
	rectangle.h = _h;
	SDL_BlitSurface (_surfaces[0],NULL,*screen,&rectangle);

}

void Entity::addPicture(std::string filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load(filename, &surf); 
	_surfaces.push_back(surf);
}

void Entity::updateanddraw(SDL_Surface **screen)
{/* empty */}

Entity* Entity::collision(Player const& player)
{
	return (Entity *)0;
}

void Entity::doCollision(GameEngine const& engine, int fight)
{/*empty*/}

}
}

