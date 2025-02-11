#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	~Background();

	void handleInput(float dt) override;
	void setWindow(sf::RenderWindow* wnd);

private:
	sf::Texture bg;
	sf::RenderWindow* window;
	Input* in;
};

