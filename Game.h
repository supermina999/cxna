#ifndef GAME
#define GAME

#include "cxna.h"
#include <irrlicht/irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Game
{
private:
    IVideoDriver* driver;
public:
    virtual void Initilize();
    virtual void LoadContent();
    virtual void Update(GameTime gameTime);
    virtual void Draw(GameTime gameTime);
    XGraphicsDevice GraphicsDevice;
    ContentManager Content;
    XMouse Mouse;
    Game();
    Game(IVideoDriver* driver);
};

#endif
