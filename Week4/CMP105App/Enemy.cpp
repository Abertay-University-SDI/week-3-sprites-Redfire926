#include "Enemy.h"

Enemy::Enemy()
{
	setPosition(600, 300);
	setSize(sf::Vector2f(100, 100));

	texture.loadFromFile("gfx/goomba.png");
	setTexture(&texture);

	speed = sf::Vector2f(800, 300);
	setVelocity(speed);
}

Enemy::~Enemy()
{
}

void Enemy::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}

void Enemy::update(float dt)
{
	if ((getPosition().x < 0) || (getPosition().x > window->getSize().x - getSize().x))
	{
		 speed.x *= -1;

		 setVelocity(speed);
	}
	if ((getPosition().y < 0) || (getPosition().y > window->getSize().y - getSize().y))
	{
		speed.y *= -1;

		setVelocity(speed);
	}
	move(velocity.x * dt, velocity.y*dt);
}



