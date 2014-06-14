#include "XMouse.h"

XMouse::XMouse()
{
    ms = new MouseState();
}

MouseState* XMouse::getState()
{
    return ms;
}
