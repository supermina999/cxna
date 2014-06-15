#include "ContentManager.h"
#include <iostream>

Texture2D ContentManager::LoadTexture2D(std::string path)
{
    if (RootDirectory != "") path = RootDirectory+"/"+path;
    return Texture2D(driver->getTexture(path.c_str()));
}

ContentManager::ContentManager()
{
    RootDirectory = "";
}

ContentManager::ContentManager(IVideoDriver* driver): driver(driver)
{

}
