#include "MyGame.h"

Texture2D tex;
SpriteBatch spriteBatch;

void MyGame::Initilize()
{
    spriteBatch = SpriteBatch(GraphicsDevice);
}

void MyGame::LoadContent()
{
    tex = Content.LoadTexture2D("tex.png");
    //tex = Content.LoadTexture2D("tex.png");
}

void MyGame::Update(GameTime gameTime)
{

}

void MyGame::Draw(GameTime gameTime)
{
    //GraphicsDevice.Clear(Color(1,0,1));
    spriteBatch.Begin();
    spriteBatch.Draw(tex, Mouse.getState().X, Mouse.getState().Y, 500, 500);
    spriteBatch.End();
}
