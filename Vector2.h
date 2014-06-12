#ifndef VECTOR2
#define VECTOR2

class Vector2
{
public:
    int X, Y;
    Vector2(int X, int Y);
};

Vector2 operator + (Vector2 a, Vector2 b);
Vector2 operator - (Vector2 a, Vector2 b);

#endif
