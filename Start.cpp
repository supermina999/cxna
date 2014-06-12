#include "cxna.h"
#include "MyGame.h"
#include <GL/glut.h>

GameTime gt = GameTime();
MyGame *myGame;

void draw()
{
    myGame->Update(gt);
    myGame->Draw(gt);
}

int main(int argc, char **argv)
{
    myGame = new MyGame();
    myGame->Initilize();
    myGame->LoadContent();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    glutInitWindowSize(800,480);
    glutCreateWindow("Hello OpenGL");
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
