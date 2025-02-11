#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	void handleInput(float dt) override;

private:
	sf::Texture icon;
	Input* in;

};

