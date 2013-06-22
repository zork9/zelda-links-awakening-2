#ifndef _TILEROOMIMPLVISITOR_H_
#define _TILEROOMIMPLVISITOR_H_

#include <SDL/SDL.h>

namespace zelda
{
namespace main
{


class TileRoomImpl1;


class TileRoomImplVisitor
{
public:
	virtual ~TileRoomImplVisitor();


	virtual int visit1(TileRoomImpl1 *impl1);

protected:
	TileRoomImplVisitor();

};

}
}

#endif
