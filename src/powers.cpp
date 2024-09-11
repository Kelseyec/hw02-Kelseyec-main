#include "powers.h"

#include <iostream>

POWER_ID Power::getID()
{
	// TODO: Complete this function and replace return value
	return POWER_FLIGHT;
}

/********************************
TODO: CODE FOR EACH POWER GOES HERE
*********************************/

Power* powerFactory(const std::string& powerName)
{
	// TODO: Complete this function and replace return value
	return nullptr;
}

std::ostream& operator<<(std::ostream& out, const Power& p)
{
	out << p.mDescription;
	return out;
}
