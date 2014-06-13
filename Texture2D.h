#ifndef TEXTURE2D
#define TEXTURE2D

#include <string>
#include <GL/glut.h>

using namespace std;

class Texture2D
{
public:
    int w, h;
    GLuint id;
    Texture2D(int w, int h, GLuint id);
    Texture2D() {}
};

#endif
