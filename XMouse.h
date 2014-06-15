#ifndef XMOUSE
#define XMOUSE

#include "MouseState.h"

class XMouse
{
public:
    XMouse();
    MouseState *ms;
    MouseState* GetState();
};

#endif // XMOUSE
