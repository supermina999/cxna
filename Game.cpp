#include "Game.h"

#include <pthread.h>
void junk() {
  int i;
  i=pthread_getconcurrency();
};

void Game::Initilize()
{

}

void Game::LoadContent()
{

}

void Game::Update(GameTime gt)
{

}

void Game::Draw(GameTime gt)
{

}

Game::Game(IVideoDriver* driver):driver(driver)
{
    Content = ContentManager(driver);
    GraphicsDevice = XGraphicsDevice(driver);
}

Game::Game()
{
    Content = ContentManager();
}
