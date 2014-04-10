#pragma once
#include <SFML\System.hpp>
#include "ComponentID.h"
class VelocityComponent :
	public ComponentID<VelocityComponent>, public sf::Vector2f
{
public:
	VelocityComponent(void);
	~VelocityComponent(void);
};

