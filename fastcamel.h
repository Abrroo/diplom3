#pragma once
#include "groundtransport.h"

class FastCamel : public GroundTransport
{
public:
	FastCamel(int speed);
	double timeOfRest() override;
	int staminaValue() override;
protected:
	int speed = 0;
private:
	int counterOfRest = 0, stamina = 10, place = 100;
};