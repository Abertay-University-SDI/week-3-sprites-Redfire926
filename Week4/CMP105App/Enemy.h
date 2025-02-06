#pragma once
#include "Framework/GameObject.h"
class Enemy :
    public GameObject
{
public:
    Enemy();
    ~Enemy();
    void enemyMovement(float dt);
    
private:
    float speed;
};

