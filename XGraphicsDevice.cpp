#include "XGraphicsDevice.h"
#include <GL/glut.h>

void XGraphicsDevice::Clear(Color c)
{
    glClearColor(c.r, c.g, c.b, c.a);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
