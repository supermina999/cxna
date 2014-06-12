#include "Vector2.h"

Vector2::Vector2(int X, int Y): X(X), Y(Y)
{

}

Vector2 operator + (Vector2 a, Vector2 b)
{
    return Vector2(a.X+b.X, a.Y+b.Y);
}

Vector2 operator - (Vector2 a, Vector2 b)
{
    return Vector2(a.X-b.X, a.Y-b.Y);
}
