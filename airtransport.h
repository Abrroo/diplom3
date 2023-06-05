#pragma once
#include "transport.h"
#include <string>

class AirTransport : public Transport
{
public:
	AirTransport(int speed);
	int getTypeOfTransport() override;
	double timeOfFly(int distance) override;
	virtual double rate(int distance);
private:
	int speed = 1;
	double time = 0;
};