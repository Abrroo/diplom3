#include "allterrainboots.h"


AllTerrainBoots::AllTerrainBoots(int speed) : GroundTransport(speed)
{
	name = "Ботинки-вездеходы";
	this->speed = speed;
}

double AllTerrainBoots::timeOfRest()
{
	if (counterOfRest == 0)
	{
		counterOfRest++;
		return 10;
	}
	return 5;
}

int AllTerrainBoots::staminaValue()
{
	return stamina;
}