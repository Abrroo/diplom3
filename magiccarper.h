#pragma once
#include "airtransport.h"

class MagicCarper : public AirTransport
{
public:
	MagicCarper(int speed);
	double rate(int distance) override;
private:
	int speed = 0, place = 100;
};