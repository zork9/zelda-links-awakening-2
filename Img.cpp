/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include"Img.h"
#include"ImgSys.h"
namespace zelda
{
namespace image
{

using namespace std;

Img::Img(char * filename, int ww, int hh) : _surface(NULL),_w(ww),_h(hh) {
	ImgSys imgsys;
	imgsys.load2(filename, &_surface);
}

Img::Img(const Img& rhs)
{
	_surface = rhs._surface;

}

Img Img::operator=(const Img& rhs)
{

	if (&rhs == this) { return *this; }

	_surface = rhs._surface;

	return (*this);
}

}
}
