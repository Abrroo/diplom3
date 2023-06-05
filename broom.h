#pragma once
#include "airtransport.h"

class Broom : public AirTransport
{
public:
	Broom(int speed);
	double rate(int distance) override;
private:
	int speed = 0, place = 100;
};