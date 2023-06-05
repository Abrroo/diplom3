#include "centaur.h"

Centaur::Centaur(int speed) : GroundTransport(speed)
{
	name = "Кентавр";
	this->speed = speed;
}

double Centaur::timeOfRest()
{
	return 2;
}

int Centaur::staminaValue()
{
	return stamina;
}