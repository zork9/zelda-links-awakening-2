/*
 Copyright (C) Johan Ceuppens 2011-2012
*/
#include "../SDL.h"
#include<string>

namespace zelda
{
namespace image
{

/*
 * State System for images
 */

using namespace std;

template<class I>
class StateImg
{
	public:
		StateImg(); 
		virtual ~StateImg();

	private:
		I *_state;
	public:
		StateImg(const StateImg& rhs);
		StateImg operator=(const StateImg& rhs);
};
}
}

