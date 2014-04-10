#pragma once
#include <SFML\System.hpp>
#include "ComponentID.h"

class AccelerationComponent :
	public ComponentID<AccelerationComponent>, sf::Vector2f
{
public:
	AccelerationComponent(void);
	~AccelerationComponent(void);
};

