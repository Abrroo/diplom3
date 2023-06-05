#include "fastcamel.h"

FastCamel::FastCamel(int speed) : GroundTransport(speed)
{
	name = "Верблюд-быстроход";
	this->speed = speed;
}

double FastCamel::timeOfRest()
{
	if (counterOfRest == 0)
	{
		counterOfRest++;
		return 5;
	}
	if (counterOfRest == 1)
	{
		counterOfRest++;
		return 6.5;
	}
	return 8;
}

int FastCamel::staminaValue()
{
	return stamina;
}