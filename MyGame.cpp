#include "MyGame.h"
#include <iostream>

using namespace std;

Texture2D tex;
SpriteBatch spriteBatch;
int h, w;

void MyGame::Initilize()
{
    spriteBatch = SpriteBatch(GraphicsDevice);
    h = w = 500;
}

void MyGame::LoadContent()
{
    tex = Content.LoadTexture2D("tex.png");
}

void MyGame::Update(GameTime gameTime)
{
    if (Keyboard.getState()->isKeyDown(Keys::ArrowLeft))
    {
        w-=10;
    }
    if (Keyboard.getState()->isKeyDown(Keys::ArrowRight))
    {
        w+=10;
    }
    if (Keyboard.getState()->isKeyDown(Keys::ArrowUp))
    {
        h-=10;
    }
    if (Keyboard.getState()->isKeyDown(Keys::ArrowDown))
    {
        h+=10;
    }
}

void MyGame::Draw(GameTime gameTime)
{
    //GraphicsDevice.Clear(Color(1,0,1));
    spriteBatch.Begin();
    spriteBatch.Draw(tex, Mouse.getState()->X, Mouse.getState()->Y, w, h);
    spriteBatch.End();
}
