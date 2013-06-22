#include "TileRoom1.h"
#include "ImgSys.h"
#include <iostream>
namespace zelda
{
namespace main
{

TileRoom1::TileRoom1() : TileRoom(32,32)
{
}



int TileRoom1::load()
{
	zelda::image::ImgSys imgsys; 

	int i = 0, j = 0;
for (j = 0; j < _screenheight/_tileheight; j++)
{
for (i = 0; i < _screenwidth/_tilewidth; i++)
{

	SDL_Surface *surface = (SDL_Surface *)0;

	switch (_tiles1[j*_screenwidth/_tilewidth + i]){
		case 1:{
		SDL_Surface *ts = SDL_LoadBMP((char *)"./Zelda/pics/maptile-dark1.bmp");
		surface = SDL_DisplayFormat(ts);
		SDL_FreeSurface(ts);
		SDL_SetColorKey (surface,SDL_SRCCOLORKEY,imgsys.get_colorkey());
		_surfaces[j*_screenwidth/_tilewidth + i] = surface;	
		break;	
		}
		default: 
		{
		SDL_Surface *ts = SDL_LoadBMP((char *)"./Zelda/pics/maptile-dark1.bmp");
		surface = SDL_DisplayFormat(ts);
		SDL_FreeSurface(ts);
		SDL_SetColorKey (surface,SDL_SRCCOLORKEY,imgsys.get_colorkey());
		_surfaces[j*_screenwidth/_tilewidth + i] = surface;	
	//	_surfaces[j*_screenwidth/_tilewidth + i] = NULL;//surface; 	
		break;
		}
	}
		
}
	 i = 0;
}

}

TileRoom1::~TileRoom1()
{}

int TileRoom1::draw(SDL_Surface **screen)
{
	int i = 0, j = 0;
for (j = 0; j < _screenheight/_tileheight; j++)
{
for (i = 0; i < _screenwidth/_tilewidth; i++)
{
	SDL_Rect rectangle;

	if (_surfaces[j*_screenwidth/_tilewidth + i] == NULL) 
		continue;
	
	switch (_tiles1[j*_screenwidth/_tilewidth + i]){
		case 1:{
	
			rectangle.x = i * _tilewidth;
			rectangle.y = j * _tileheight;
			rectangle.w = _tilewidth;
			rectangle.h = _tileheight;
			SDL_BlitSurface (_surfaces[j*_screenwidth/_tilewidth + i],NULL,*screen,&rectangle);
		break;	
		}
		default: 
		{break;}
	}
}
	 i = 0;
}
	return 0;
}

}//namespace main
}//namespace zelda
