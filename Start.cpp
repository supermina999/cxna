#include "cxna.h"
#include "MyGame.h"
#include <irrlicht/irrlicht.h>
#include <iostream>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class MyEventReceiver : public IEventReceiver
{
public:
    MouseState *ms;
    void Init (MouseState *ms)
    {
        this->ms = ms;
    }
    virtual bool OnEvent(const SEvent& event)
    {
        if (event.EventType == irr::EET_MOUSE_INPUT_EVENT)
        {
            switch(event.MouseInput.Event)
            {
                case EMIE_LMOUSE_PRESSED_DOWN:
                    ms->LeftButton = true;
                    break;

                case EMIE_LMOUSE_LEFT_UP:
                    ms->LeftButton = false;
                    break;
                case EMIE_MOUSE_MOVED:
                    ms->X = event.MouseInput.X;
                    ms->Y = event.MouseInput.Y;
                    break;
                default:
                    break;
            }
        }
    }
MyEventReceiver()
{
}
};

GameTime gt = GameTime();
MyGame *myGame;

int main(int argc, char **argv)
{
    MyEventReceiver receiver;
    IrrlichtDevice *device = createDevice(video::EDT_OPENGL, dimension2d<u32>(640,480), 16, 0, 0, 0, &receiver);
    if (!device) return 1;
    device->setWindowCaption(L"CXNA");
    IVideoDriver* driver = device->getVideoDriver();
    myGame = new MyGame(driver);
    receiver.Init(&(myGame->Mouse.ms));
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
