#pragma once
#include "groundtransport.h"

class AllTerrainBoots : public GroundTransport
{
public:
	AllTerrainBoots(int speed);
	double timeOfRest() override;
	int staminaValue() override;
protected:
	int speed = 0;
	//std::string name;
private:
	int counterOfRest = 0, stamina = 60, place = 100;
};