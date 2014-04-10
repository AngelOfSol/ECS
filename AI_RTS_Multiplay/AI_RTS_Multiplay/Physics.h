#pragma once

#include <SFML\System.hpp>

#include "system.h"


class Physics :
	public System<sf::Time>
{
public:
	Physics(void);
	~Physics(void);
};

