#include "Player.h"

Player::Player()
{
	speed = 500;
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		setVelocity(speed, 0);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		setVelocity(-speed, 0);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		setVelocity(0, -speed);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		setVelocity(0, speed);
		move(velocity * dt);
	}

}
