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

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0.0, glutGet(GLUT_WINDOW_WIDTH), 0.0, glutGet(GLUT_WINDOW_HEIGHT), -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glDisable(GL_LIGHTING);
    glColor3f(1,1,1);
    glEnable(GL_TEXTURE_2D);

    glutMainLoop();
    return 0;
}
