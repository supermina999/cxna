#include "SpriteBatch.h"
#include <GL/glut.h>

SpriteBatch::SpriteBatch(XGraphicsDevice q)
{

}

void SpriteBatch::Draw(Texture2D tex, int x, int y, int w, int h)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, tex.id);
    glEnable(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glBegin(GL_QUADS);
    glTexCoord2f(0, 0); glVertex3f(x, y, 0);
    glTexCoord2f(0, 1); glVertex3f(x, y+h, 0);
    glTexCoord2f(1, 1); glVertex3f(x+w, y+h, 0);
    glTexCoord2f(1, 0); glVertex3f(x+w, y, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    glutSwapBuffers();
}

void SpriteBatch::Draw(Texture2D tex, int x, int y)
{
    Draw(tex, x, y, tex.w, tex.h);
}

void SpriteBatch::Draw(Texture2D tex, Vector2 pos)
{
    Draw(tex, pos.X, pos.Y);
}

void SpriteBatch::Draw(Texture2D tex, Rectangle rect)
{
    Draw(tex, rect.x, rect.y, rect.width, rect.height);
}
