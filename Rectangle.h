#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
public:
    int X, Y, width, height;
    Rectangle(int x, int y, int width, int height);
    void Offset(int dx, int dy)
    {
      X += dx;
      Y += dy;
    }
    Rectangle() {}
};

#endif
