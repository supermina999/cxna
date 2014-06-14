#ifndef KEYBOARDSTATE
#define KEYBOARDSTATE

class KeyboardState
{
public:
    bool u[5000];
    KeyboardState();
    bool isKeyDown(char a);
};

#endif // KEYBOARDSTATE
