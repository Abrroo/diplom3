#pragma once
#include "airtransport.h"

class Eagle : public AirTransport
{
public:
	Eagle(int speed);
	double rate(int distance) override;
private:
	int speed = 0, place = 100;
};