#include "broom.h"
#include "broom.h"


Broom::Broom(int speed) : AirTransport(speed)
{
	name = "Метла";
	this->speed = speed;
}

double Broom::rate(int distance)
{

	return 1- ((distance / static_cast<double>(1000)) / 100);
}

