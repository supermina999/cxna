#include "XKeyboard.h"

XKeyboard::XKeyboard()
{
    ks = new KeyboardState();
}

KeyboardState *XKeyboard::GetState()
{
    return ks;
}
