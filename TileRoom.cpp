#include "TileRoom.h"
#include <string.h>

namespace zelda
{
namespace main
{

TileRoom::TileRoom(int tw, int th) : Room()
{
_tilewidth = tw;
_tileheight = th;


_surfaces = (SDL_Surface **)malloc(sizeof(SDL_Surface *) * _screenwidth/_tilewidth * _screenheight/_tileheight);//###NOTE

}

TileRoom::~TileRoom()
{}


int TileRoom::draw(SDL_Surface **screen)
{

	return 0;

}

int TileRoom::load()
{

	return 0;

}
}//namespace main
}//namespace zelda
