#pragma once
#include "groundtransport.h"

class Centaur : public GroundTransport
{
public:
	Centaur(int speed);
	double timeOfRest() override;
	int staminaValue() override;
protected:
	int speed = 0;
private:
	int counterOfRest = 0, stamina = 8, place = 100;
};