#include "XKeyboard.h"

XKeyboard::XKeyboard()
{
    ks = new KeyboardState();
}

KeyboardState *XKeyboard::getState()
{
    return ks;
}
