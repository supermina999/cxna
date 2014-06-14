#ifndef CONTENTMANAGER
#define CONTENTMANAGER

#include <string>
#include "Texture2D.h"
#include <irrlicht/irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class ContentManager
{
private:
    IVideoDriver* driver;
public:
    ContentManager();
    ContentManager(IVideoDriver* driver);
    std::string RootDirectory;
    Texture2D LoadTexture2D(std::string path);
};

#endif
