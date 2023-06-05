#pragma once
#include <string>
#include "groundtransport.h"
#include "airtransport.h"
#include "allterrainboots.h"
#include "camel.h"
#include "fastcamel.h"
#include "centaur.h"
#include "magiccarper.h"
#include "eagle.h"
#include "broom.h"


class Races
{
public:
	Races(std::string typeOfRace, int distance);
	int getCountOfMembers();
	int memberRegistration(Transport* tr, int index);  // 0 - успешно зарегистрирован 1 - уже зарегистировано, 2 - Попытка зарегистрировать неправильный тип ТС
	std::string getTypeOfRace();
	int getDistance();
	double result(Transport* tr);
	double result(Transport* tr, int flag);
private:
	int _distance = 0, counterOfMembers = 0, speed = 0, _place = 1, tempPlace = 0, legalTypeOfTransport, index = 0;
	std::string _typeOfRace;
	bool reg_tr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
};