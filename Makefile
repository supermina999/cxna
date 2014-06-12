all: GameTime.o MyGame.o Start.o Rectangle.o Vector2.o Game.o XGraphicsDevice.o Color.o
	g++ Start.o GameTime.o Rectangle.o MyGame.o Vector2.o Game.o XGraphicsDevice.o Color.o -lGL -lglut -o Game
clear:
	rm *.o
	rm Game
GameTime.o: GameTime.cpp GameTime.h
	g++ -c GameTime.cpp
MyGame.o: MyGame.cpp MyGame.h cxna.h
	g++ -c MyGame.cpp
Start.o: Start.cpp MyGame.h
	g++ -c Start.cpp
Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp
Vector2.o: Vector2.cpp Vector2.h
	g++ -c Vector2.cpp
Game.o: Game.cpp Game.h cxna.h
	g++ -c Game.cpp
XGraphicsDevice.o: XGraphicsDevice.cpp XGraphicsDevice.h Color.h
	g++ -c XGraphicsDevice.cpp
Color.o: Color.cpp Color.h
	g++ -c Color.cpp
