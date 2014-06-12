#ifndef CONTENTMANAGER
#define CONTENTMANAGER

#include <string>
#include "Texture2D.h"

using namespace std;

class ContentManager
{
public:
    ContentManager();
    string RootDirectory;
    Texture2D LoadTexture2D(string path);
};

#endif
