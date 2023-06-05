#include "airtransport.h"


AirTransport::AirTransport(int speed) : Transport(speed)
{
	this->speed = speed;
	name = "Воздушный транспорт";
}

int AirTransport::getTypeOfTransport()
{
	return 2;
}

double AirTransport::rate(int distance)
{
	return 1;
}

double AirTransport::timeOfFly(int distance)
{
	time = distance / speed;
	time = time * rate(distance);
	return time;
}


