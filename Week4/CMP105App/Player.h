#pragma once
#include "Framework/GameObject.h"
class Player :
    public GameObject
{
public:
    Player();
    ~Player();
    void handleInput(float dt) override;

private:
	// Level objects
    float speed;

};

