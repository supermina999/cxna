#include "SpriteBatch.h"
#include <GL/glut.h>

SpriteBatch::SpriteBatch(XGraphicsDevice q)
{
    driver = q.driver;
}

void SpriteBatch::Draw(Texture2D tex, int x, int y, int w, int h)
{
    dimension2d<u32> s = tex.tex->getSize();
    driver->draw2DImage(tex.tex, rect<s32>(x, y, w, h), rect<s32>(0, 0, s.Width, s.Height));
}

void SpriteBatch::Draw(Texture2D tex, int x, int y)
{
    driver->draw2DImage(tex.tex, position2d<s32>(x, y));
}

void SpriteBatch::Draw(Texture2D tex, Vector2 pos)
{
    Draw(tex, pos.X, pos.Y);
}

void SpriteBatch::Draw(Texture2D tex, Rectangle rect)
{
    Draw(tex, rect.x, rect.y, rect.width, rect.height);
}

void SpriteBatch::Begin()
{
    driver->beginScene();
}

void SpriteBatch::End()
{
    driver->endScene();
}
