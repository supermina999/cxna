#ifndef XGRAPHICSDEVICE
#define XGRAPHICSDEVICE

#include "Color.h"
#include <irrlicht/irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class XGraphicsDevice
{
public:
    IVideoDriver* driver;
    XGraphicsDevice() {}
    XGraphicsDevice(IVideoDriver* driver): driver(driver) {}
    void Clear(Color c);
};

#endif
