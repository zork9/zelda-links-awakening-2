/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
//#include "Player.h"
#include "Enemy.h"
#include "Player.h"

namespace zelda
{
namespace main
{

Enemy::Enemy(int xx, int yy, int ww, int hh) : Entity(xx,yy,ww,hh), _direction((char *)"left"), _fightsurfacesindex(0)
{
}

Enemy::~Enemy()
{}

void Enemy::moveLeft()
{
	_direction = (char *)"left";
	_x += -1;
}

void Enemy::moveRight()
{
	_direction = (char *)"right";
	_x += 1;
}

void Enemy::moveDown()
{
	_direction = (char *)"down";
	_y += 1;
}

void Enemy::moveUp()
{
	_direction = (char *)"up";
	_y -= 1;
}

void Enemy::undoMove()
{

	if (_direction == (char *)"left")
		_x += 1;
	else if (_direction == (char *)"right")
		_x -= 1;
	else if (_direction == (char *)"up")
		_y += 1;
	else if (_direction == (char *)"down")
		_y -= 1;

}


Entity* Enemy::collision(Player const& player)
{
	//FIXME colllision square
	int xx = const_cast<Player&>(player).get_x();
	int yy = const_cast<Player&>(player).get_y();
	int ww = const_cast<Player&>(player).get_w();
	int hh = const_cast<Player&>(player).get_h();
	if (xx > _x && xx < _x + _w && yy > _y && yy < _y + _h)
		return (this);
	else
		return (Entity *)0;
}


void Enemy::blit(SDL_Surface **screen)
{ 
	if (_surfacesindex >= _surfaces.size())
		_surfacesindex = 0;

	SDL_Rect rectangle;
	rectangle.x = _x;
	rectangle.y = _y;
	rectangle.w = _w;
	rectangle.h = _h;
	if (_direction == (char *)"down")
		SDL_BlitSurface (_surfaces[_surfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"up")
		SDL_BlitSurface (_upsurfaces[_surfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"left")
		SDL_BlitSurface (_leftsurfaces[_surfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"right")
		SDL_BlitSurface (_rightsurfaces[_surfacesindex],NULL,*screen,&rectangle);
	else
		SDL_BlitSurface (_surfaces[_surfacesindex],NULL,*screen,&rectangle);
	_surfacesindex++;

}

void Enemy::blitfight(SDL_Surface **screen)
{ 
	if (_fightsurfacesindex >= _fightupsurfaces.size()) // NOTE : up down left right index can be different
		_fightsurfacesindex = 0;

	SDL_Rect rectangle;
	rectangle.x = _x;
	rectangle.y = _y;
	rectangle.w = _w;
	rectangle.h = _h;
	if (_direction == (char *)"down")
		SDL_BlitSurface (_fightdownsurfaces[_fightsurfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"up")
		SDL_BlitSurface (_fightupsurfaces[_fightsurfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"left")
		SDL_BlitSurface (_fightleftsurfaces[_fightsurfacesindex],NULL,*screen,&rectangle);
	else if (_direction == (char *)"right")
		SDL_BlitSurface (_fightrightsurfaces[_fightsurfacesindex],NULL,*screen,&rectangle);
	else
		SDL_BlitSurface (_fightdownsurfaces[_fightsurfacesindex],NULL,*screen,&rectangle);
	_fightsurfacesindex++;

}



void Enemy::addPictureUp(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_upsurfaces.push_back(surf);
}
void Enemy::addPictureDown(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_surfaces.push_back(surf);
}
void Enemy::addPictureLeft(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_leftsurfaces.push_back(surf);
}
void Enemy::addPictureRight(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_rightsurfaces.push_back(surf);
}

//Fight Pics :


void Enemy::addFightPictureUp(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_fightupsurfaces.push_back(surf);
}
void Enemy::addFightPictureDown(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_fightdownsurfaces.push_back(surf);
}
void Enemy::addFightPictureLeft(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_fightleftsurfaces.push_back(surf);
}
void Enemy::addFightPictureRight(char * filename)
{ 
	SDL_Surface *surf = NULL; 
	zelda::image::ImgSys imgsys; 
	imgsys.load2(filename, &surf); 
	_fightrightsurfaces.push_back(surf);
}


}
}
