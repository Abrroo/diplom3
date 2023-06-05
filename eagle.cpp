#include "eagle.h"
#include "eagle.h"

Eagle::Eagle(int speed) : AirTransport(speed)
{
	name = "Îğåë";
	this->speed = speed;
}

double Eagle::rate(int distance)
{
	return 0.94;
}
