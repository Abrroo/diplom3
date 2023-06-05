#pragma once
#include "groundtransport.h"

class Camel : public GroundTransport
{
public:
	Camel(int speed);
	double timeOfRest() override;
	int staminaValue() override;
protected:
	int speed = 0;
private:
	int counterOfRest = 0, stamina = 30, place = 100;
};
