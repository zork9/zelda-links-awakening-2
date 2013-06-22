/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include"StateImg.h"
#include"ImgSys.h"

namespace zelda
{
namespace image
{

using namespace std;

template<class C>
StateImg<C>::StateImg() : _state(NULL) 
{

}

template<class C>
StateImg<C>::StateImg(const StateImg& rhs)
{
	_state = rhs._state;

}

template<class C>
StateImg<C> StateImg<C>::operator=(const StateImg& rhs)
{

	if (&rhs == this) { return *this; }

	_state = rhs._state;

	return (*this);
}

}
}
