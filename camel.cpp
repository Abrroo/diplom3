#include "camel.h"
#include "camel.h"

Camel::Camel(int speed) : GroundTransport(speed)
{
	name = "Верблюд";
	this->speed = speed;
}

double Camel::timeOfRest()
{
	if (counterOfRest == 0)
	{
		counterOfRest++;
		return 5;
	}
	return 8;
}

int Camel::staminaValue()
{
	return stamina;
}
