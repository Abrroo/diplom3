#pragma once
#include "transport.h"
#include <string>

class GroundTransport : public Transport
{
public:
	GroundTransport(int speed);
	int getTypeOfTransport() override;
	double timeOfRace(int distance) override;
	virtual double timeOfRest();
	virtual int staminaValue();
private:
	int speed = 1, stamina = 1;
	int counter = 0, numRest = 0, timeRace;
	double time = 0;
};