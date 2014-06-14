#include "cxna.h"
#include "MyGame.h"
#include <GL/glut.h>
#include <irrlicht/irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

GameTime gt = GameTime();
MyGame *myGame;

int main(int argc, char **argv)
{
    IrrlichtDevice *device = createDevice(video::EDT_OPENGL, dimension2d<u32>(640,480));
    if (!device) return 1;
    device->setWindowCaption(L"CXNA");
    IVideoDriver* driver = device->getVideoDriver();
    myGame = new MyGame(driver);
    myGame->Initilize();
    myGame->LoadContent();
    while (device->run() && driver)
    {
        if (device->isWindowActive())
        {
            myGame->Update(gt);
            myGame->Draw(gt);
        }
    }
    device->drop();
    return 0;
}
