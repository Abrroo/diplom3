#include "Races.h"
#include <iostream>

Races::Races(std::string typeOfRace, int distance) //: Camel(speed), AllTerrainBoots(speed), MagicCarper(speed), FastCamel(speed), Eagle(speed), Centaur(speed), Broom(speed) 
{
	_distance = distance;
	_typeOfRace = typeOfRace;
	if (_typeOfRace == "Гонка для наземного транспорта") { legalTypeOfTransport = 1; }
	else if (_typeOfRace == "Гонка для воздушного транспорта") { legalTypeOfTransport = 2; }
	else if (_typeOfRace == "Гонка для наземного и воздушного транспорта") { legalTypeOfTransport = 3; }
	else legalTypeOfTransport = 0;
}

int Races::getCountOfMembers()
{
	return counterOfMembers;
}

int Races::memberRegistration(Transport* tr, int index)  // 0 - успешно зарегистрирован 1 - уже зарегистировано, 2 - Попытка зарегистрировать неправильный тип ТС
{
	if (reg_tr[index] == true)
	{
		return 1;
	}
	else
	{
		if ((tr->getTypeOfTransport() != legalTypeOfTransport) && (legalTypeOfTransport != 3))
		{
			return 2;
		}
		counterOfMembers++;
		reg_tr[index] = true;
		return 0;
	}
} 

std::string Races::getTypeOfRace()
{
	return _typeOfRace;
}

int Races::getDistance()
{
	return _distance;
}



double Races::result(Transport* tr)
{
	if (tr->getTypeOfTransport() == 1)
	{
		return tr->timeOfRace(_distance);
	}
	else if (tr->getTypeOfTransport() == 2)
	{
		return tr->timeOfFly(_distance);
	}
	else return 0;
}

double Races::result(Transport* tr, int flag)
{
	if (tr->getTypeOfTransport() == 1)
	{
		return tr->timeOfRace(_distance);
	}
	else if (tr->getTypeOfTransport() == 2)
	{
		return tr->timeOfFly(_distance);
	}
	else return 0;
}