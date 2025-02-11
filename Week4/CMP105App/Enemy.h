#pragma once
#include "Framework/GameObject.h"
class Enemy :
    public GameObject
{
public:
    Enemy();
    ~Enemy();
    void update(float dt) override;
    void setWindow(sf::RenderWindow* wnd);
    
private:
    sf::Vector2f speed;
    sf::Texture texture;
    sf::RenderWindow* window;
};

