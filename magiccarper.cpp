#include "magiccarper.h"
#include "magiccarper.h"

MagicCarper::MagicCarper(int speed) : AirTransport(speed)
{
	name = "Ковер-самолет";
	this->speed = speed;
}

double MagicCarper::rate(int distance)
{
	if (distance < 1000)
	{
		return 1;
	}
	else if (distance < 5000)
	{
		return 0.97;
	}
	else if (distance < 10000)
	{
		return 0.90;
	}
	return 0.95;
}
