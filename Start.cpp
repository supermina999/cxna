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
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    glutInitWindowSize(640,480);
    glutCreateWindow("Hello OpenGL");
    myGame = new MyGame();
    myGame->Initilize();
    myGame->LoadContent();
    glutDisplayFunc(draw);

    const int XSize = 640, YSize = 480;
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    glOrtho (0, XSize, YSize, 0, 0, 1);
    glDisable(GL_DEPTH_TEST);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();

    glutMainLoop();
    return 0;
}
