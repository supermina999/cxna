#ifndef CONTENTMANAGER
#define CONTENTMANAGER

#include <string>
#include "Texture2D.h"

using namespace std;

class ContentManager
{
    ContentManager();
    string RootDirectory;
    Texture2D LoadTexture2D(string path);
};

#endif
