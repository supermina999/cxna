#ifndef TEXTURE2D
#define TEXTURE2D

#include <irrlicht/irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Texture2D
{
public:
    ITexture *tex;
    Texture2D(ITexture *tex);
    Texture2D() {}
};

#endif
