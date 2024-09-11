#include "hero.h"
#include "strlib.h"
#include <iostream>

Hero::Hero(const std::string& heroDef)
{
	// TODO: Complete this function
}

std::string Hero::getName()
{
	// TODO: Complete this function and replace return value
	return "";
}

Power* Hero::useRandomPower()
{
	// TODO: Complete this function and replace return value
	return nullptr;
}

int Hero::getHealth()
{
	// TODO: Complete this function and replace return value
	return 0;
}

void Hero::takeDamage()
{
	// TODO: Complete this function
}

void Hero::resetHealth()
{
	// TODO: Complete this function
}

std::ostream& operator<<(std::ostream& out, const Hero& h)
{
	out << h.mName << " has the following powers..." << std::endl;
	
	for (int i = 0; i < h.mPowers.size(); i++)
	{
		std::cout << "\t" << *(h.mPowers[i]) << std::endl;
	}

	return out;
}
