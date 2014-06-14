all: GameTime.o MyGame.o Start.o Rectangle.o Vector2.o Game.o XGraphicsDevice.o Color.o Texture2D.o ContentManager.o SpriteBatch.o ButtonState.o MouseState.o XMouse.o Keys.o KeyboardState.o XKeyboard.o
	g++ Start.o GameTime.o Rectangle.o MyGame.o Vector2.o Game.o XGraphicsDevice.o Color.o Texture2D.o ContentManager.o SpriteBatch.o ButtonState.o MouseState.o XMouse.o Keys.o KeyboardState.o XKeyboard.o -lGL -lIrrlicht -lm -pthread -o Game
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
Texture2D.o: Texture2D.cpp Texture2D.h
	g++ -c Texture2D.cpp
ContentManager.o: ContentManager.cpp ContentManager.h
	g++ -c ContentManager.cpp
SpriteBatch.o: SpriteBatch.cpp SpriteBatch.h
	g++ -c SpriteBatch.cpp
ButtonState.o: ButtonState.h ButtonState.cpp
	g++ -c ButtonState.cpp
MouseState.o: MouseState.h MouseState.cpp
	g++ -c MouseState.cpp
XMouse.o: XMouse.h XMouse.cpp
	g++ -c XMouse.cpp
Keys.o: Keys.h Keys.cpp
	g++ -c Keys.cpp
KeyboardState.o: KeyboardState.h KeyboardState.cpp
	g++ -c KeyboardState.cpp
XKeyBoard.o: XKeyboard.h XKeyboard.cpp
	g++ -c XKeyBoard.cpp
