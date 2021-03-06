#ifndef SPRITEBATCH
#define SPRITEBATCH

#include "cxna.h"

class SpriteBatch
{
private:
    IVideoDriver* driver;
public:
    SpriteBatch() {}
    SpriteBatch(XGraphicsDevice q);
    void Draw(Texture2D tex, int x, int y);
    void Draw(Texture2D tex, Vector2 pos);
    void Draw(Texture2D tex, int x, int y, int w, int h);
    void Draw(Texture2D tex, Rectangle rect);
    void Begin();
    void End();
};

#endif
