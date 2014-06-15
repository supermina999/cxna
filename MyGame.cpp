#include "MyGame.h"
#include <iostream>

using namespace std;

Texture2D tex;
SpriteBatch spriteBatch;
int h, w;

void MyGame::Initilize()
{
    Content.RootDirectory = "Content";
    spriteBatch = SpriteBatch(GraphicsDevice);
    h = w = 500;
}

void MyGame::LoadContent()
{
    tex = Content.LoadTexture2D("tex.png");
}

void MyGame::Update(GameTime gameTime)
{
    int t = gameTime.EllapsedGameTime;
    if (Keyboard.GetState()->isKeyDown(Keys::ArrowLeft))
    {
        w-=t/10;
    }
    if (Keyboard.GetState()->isKeyDown(Keys::ArrowRight))
    {
        w+=t/10;
    }
    if (Keyboard.GetState()->isKeyDown(Keys::ArrowUp))
    {
        h-=t/10;
    }
    if (Keyboard.GetState()->isKeyDown(Keys::ArrowDown))
    {
        h+=t/10;
    }
}

void MyGame::Draw(GameTime gameTime)
{
    //GraphicsDevice.Clear(Color(1,0,1));
    spriteBatch.Begin();
    spriteBatch.Draw(tex, Mouse.GetState()->X, Mouse.GetState()->Y, w, h);
    spriteBatch.End();
}
