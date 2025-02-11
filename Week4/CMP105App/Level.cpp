#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	textureGood.loadFromFile("gfx/Mushroom.png");
	textureBad.loadFromFile("gfx/Goomba.png");

	testSprite.setTexture(&textureGood);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	p1.setTexture(&textureGood);
	p1.setSize(sf::Vector2f(100, 100));
	p1.setPosition(300, 300);
	p1.setInput(in);
	goomba.setWindow(hwnd);
	bg.setInput(in);
	bg.setWindow(hwnd);
	cursor.setInput(in);

	window->setMouseCursorVisible(false);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	p1.handleInput(dt);
	bg.handleInput(dt);
	cursor.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	goomba.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(bg);
	window->draw(testSprite);
	window->draw(p1);
	window->draw(goomba);
	window->draw(cursor);

	endDraw();
}
