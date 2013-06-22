CXX=g++
CC=gcc
INCLUDES=-I/usr/include/SDL

OBJS=Enemy.o \
	EnemyImpl.o \
	EntityInterface.o \
	EnemyMyconidWizard.o \
	EnemyMyconid.o \
	EnemyOctorok.o \
	EnemyDemon.o \
	EnemyDemon2.o \
	EnemyKnightRed.o \
	EnemyKnightGreen.o \
	EnemyKnightBlue.o \
	Statue1.o \
	Entity.o \
	Exit.o \
	GameEngine.o \
	Img.o \
	ImgSys.o \
	Player.o \
	Room.o \
	Room1.o \
	TileRoom.o \
	TileRoomImplVisitor.o \
	TileRoomImpl.o \
	TileRoomImpl1.o \
	TileRoomInterface.o \
	TileRoom1.o \
	StateImg.o \
	util.o \
	Wall.o \
	main.o

all: Zelda

Zelda: $(OBJS) 
	$(CXX) -o zeldagame $(OBJS) -lSDL

clean:
	rm -f *.o zeldagame

.cpp.o:
	$(CXX) $(INCLUDES) -c $<
