#ifndef GAME
#define GAME

#include "cxna.h"

class Game
{
public:
    virtual void Initilize();
    virtual void LoadContent();
    virtual void Update(GameTime gameTime);
    virtual void Draw(GameTime gameTime);
    XGraphicsDevice GraphicsDevice;
    ContentManager Content;
    Game();
};

#endif
