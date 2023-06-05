#include "groundtransport.h"


GroundTransport::GroundTransport(int speed) : Transport(speed)
{
	this->speed = speed;
	name = "Наземный транспорт";
}

int GroundTransport::staminaValue()
{
	return stamina;
}

int GroundTransport::getTypeOfTransport()
{
	return 1;
}

double GroundTransport::timeOfRace(int distance)
{
	time = distance / speed;
	counter = time / staminaValue();
	for (size_t i = 0; i < counter; i++)
	{
		time = time + timeOfRest();
	}
	return time;
}

double GroundTransport::timeOfRest()
{
	return 0;
}
