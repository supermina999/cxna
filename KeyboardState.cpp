#include "KeyboardState.h"

KeyboardState::KeyboardState()
{
    for (int i = 0; i < 5000; i++) u[i] = 0;
}

bool KeyboardState::isKeyDown(char a)
{
    return u[a];
}
