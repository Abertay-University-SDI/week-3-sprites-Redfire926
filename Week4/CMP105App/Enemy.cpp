#include "Enemy.h"

Enemy::Enemy()
{
	speed = 200;
	setVelocity(speed * 2, speed);
}

Enemy::~Enemy()
{
}

void Enemy::enemyMovement(float dt)
{
	if (getPosition().x < 0)
	{
		setVelocity(speed * 2, 0);
		move(velocity * dt);
	}
}
