#ifndef TEXTURE2D
#define TEXTURE2D

#include <FreeImage.h>
#include <string>

using namespace std;

class Texture2D
{
public:
    int w, h, id;
    Texture2D(int w, int h, int id);
    Texture2D() {}
};

#endif
