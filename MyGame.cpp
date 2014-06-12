#include "MyGame.h"

Texture2D tex;
SpriteBatch spriteBatch;

void MyGame::Initilize()
{
    spriteBatch = SpriteBatch(GraphicsDevice);
}

void MyGame::LoadContent()
{
    tex = Content.LoadTexture2D("tex.bmp");
}

void MyGame::Update(GameTime gameTime)
{

}

void MyGame::Draw(GameTime gameTime)
{
    //GraphicsDevice.Clear(Color(1,0,1));
    spriteBatch.Draw(tex, 0,0);
}
