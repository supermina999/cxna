#ifndef XMOUSE
#define XMOUSE

#include "MouseState.h"

class XMouse
{
public:
    MouseState ms;
    MouseState getState();
};

#endif // XMOUSE
