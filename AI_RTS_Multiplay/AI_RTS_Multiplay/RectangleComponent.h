#pragma once
#include <SFML\System.hpp>
#include "ComponentID.h"

class RectangleComponent :
	public ComponentID<RectangleComponent>
{
public:
	RectangleComponent(void);
	~RectangleComponent(void);
	sf::Vector2f dimensions;
};

