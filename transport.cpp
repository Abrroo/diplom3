#include "transport.h"


Transport::Transport()
{
}

Transport::Transport(int speed)
{
	name = "Транспорт";
	this->speed = speed;
}

string Transport::getname() { return name; }

int Transport::getTypeOfTransport()
{
	return type;
}

double Transport::timeOfRace(int distance)
{
	return 1;
}

double Transport::timeOfFly(int distance)
{
	return 1;
}

void Transport::writePlace(int place)
{
	this->place = place;
}

int Transport::readPlace()
{
	return this->place;
}
