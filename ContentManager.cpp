#include "ContentManager.h"
#define ILUT_USE_OPENGL
#include <GL/glut.h>
#include <iostream>
#include <string.h>
#include <SOIL/SOIL.h>

#pragma GCC diagnostic ignored "-fpermissive"

Texture2D ContentManager::LoadTexture2D(string path)
{
     glActiveTexture(GL_TEXTURE0);
  GLuint texture_id = SOIL_load_OGL_texture
    (
     path.c_str(),
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
     SOIL_FLAG_INVERT_Y
     );
  if(texture_id == 0)
    cerr << "SOIL loading error: '" << SOIL_last_result() << "' (" << path << ")" << endl;
    int img_width, img_height;
  unsigned char* img = SOIL_load_image("res_texture.png", &img_width, &img_height, NULL, 0);

  glGenTextures(1, &texture_id);
  glBindTexture(GL_TEXTURE_2D, texture_id);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img_width, img_height, 0, GL_RGB, GL_UNSIGNED_BYTE, img);
    return Texture2D(texture_id, 0, 0);
}

ContentManager::ContentManager()
{
    RootDirectory = "";
}
