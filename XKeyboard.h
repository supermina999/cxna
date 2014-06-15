#ifndef XKEYBOARD
#define XKEYBOARD

#include "KeyboardState.h"

class XKeyboard
{
public:
    KeyboardState *ks;
    XKeyboard();
    KeyboardState *GetState();
};

#endif // XKEYBOARD
