#include "XMouse.h"

XMouse::XMouse()
{
    ms = new MouseState();
}

MouseState* XMouse::GetState()
{
    return ms;
}
