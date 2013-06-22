/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#ifndef IMGSYS_H
#define IMGSYS_H

#include <SDL/SDL.h>
#include<map>
//#include<unistd.h>
namespace zelda
{
namespace image
{

class ImgSys
{
	public:
		ImgSys() : _colorkey(0x000000) {}
		ImgSys(Uint32 colorkey) : _colorkey(colorkey) {}
		virtual ~ImgSys() {}

		int reload(char * filename, SDL_Surface *surface);
		int load(char * filename, SDL_Surface *surface);
		int load2(char * filename, SDL_Surface **surface);
		//int load(char * filename, map<std::char *, SDL_Surface *> *surfaces);//FIXME map


		uint32_t get_colorkey() { return _colorkey; }
	
	
	protected:

	private:
		int filein(char *filename, SDL_Surface *surface = NULL);		
		int filein2(char *filename, SDL_Surface **surface = NULL);		
	private:
		uint32_t _colorkey;

};

}
}


#endif
