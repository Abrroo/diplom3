#include <iostream>
#include <string>
#include "Races.h"
#include "transport.h"

#include "groundtransport.h"
#include "allterrainboots.h"
#include "camel.h"
#include "fastcamel.h"
#include "centaur.h"


#include "airtransport.h"
#include "magiccarper.h"
#include "eagle.h"
#include "broom.h"



std::string _choosingTypeOfRace()
{
	int input = 0;
	std::string str1{ "Гонка для наземного транспорта" };
	std::string str2{ "Гонка для воздушного транспорта" };
	std::string str3{ "Гонка для наземного и воздушного транспорта" };
	std::cout << "1. " << str1 << std::endl;
	std::cout << "2. " << str2 << std::endl;
	std::cout << "3. " << str3 << std::endl;
	std::cout << "Выберите действие: ";
	std::cin >> input;
	std::cout << std::endl;
	if (input == 1) { return str1; }
	else if (input == 2) { return str2; }
	else if (input == 3) { return str3; }
	else { return "Неизвестно"; }
}

unsigned choosingDistance()
{
	int input = 0;
	std::cout << "Укажите длину дистанции(должна быть положительна): ";
	std::cin >> input;
	return input;
}

int counterOfMembers(Races* race)
{
	return race->getCountOfMembers();
}

void printListOfVar()
{
	std::cout << "1. Ботинки-вездеходы" << std::endl;
	std::cout << "2. Метла" << std::endl;
	std::cout << "3. Верблюд" << std::endl;
	std::cout << "4. Кентавр" << std::endl;
	std::cout << "5. Орел" << std::endl;
	std::cout << "6. Верблюд-быстроход" << std::endl;
	std::cout << "7. Ковер-самолет" << std::endl;
	std::cout << "0. Закончить регистрацию" << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	int userChoice = 0/*, tempUserChoice = 0*/;
	do
	{
		std::cout << std::endl;
		Races race(_choosingTypeOfRace(), choosingDistance());
		AllTerrainBoots boots(6);
		Broom broom(20);
		Camel camel(10);
		Centaur centaur(15);
		Eagle eagle(8);
		FastCamel fastCamel(40);
		MagicCarper magicCarper(10);
		/*bool ch;*/
		Transport* temp[7]{ &boots, &broom, &camel, &centaur, &eagle, &fastCamel, &magicCarper };
		int tempPlace = 0;
		double maxTime = 0;
		double fin[7]{};
		do
		{
			if (counterOfMembers(&race) < 2) { std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl; }
												std::cout << "1. Зарегистировать транспортное средство" << std::endl;
			if (counterOfMembers(&race) > 1) { std::cout << "2. Начать гонку" << std::endl; }
												std::cout << "Выберете действие: ";
			std::cin >> userChoice;
			std::cout << endl;

			if (userChoice == 1)
			{
				std::string message = "";
				int ans;
				do
				{
					ans = 4;
					std::cout << race.getTypeOfRace() << ". " << "Расcтояние: " << race.getDistance() << endl;
					printListOfVar();
					std::cout << "Выберите транспорт или 0 для окончательного процесса регистрации: ";
					std::cin >> userChoice;
					std::cout << endl;
					switch (userChoice)
					{
					case 1:
						ans = race.memberRegistration(&boots, userChoice);
						message = boots.getname();
						break;
					case 2:
						ans = race.memberRegistration(&broom, userChoice);
						message = broom.getname();
						break;
					case 3:
						ans = race.memberRegistration(&camel, userChoice);
						message = camel.getname();
						break;
					case 4:
						ans = race.memberRegistration(&centaur, userChoice);
						message = centaur.getname();
						break;
					case 5:
						ans = race.memberRegistration(&eagle, userChoice);
						message = eagle.getname();
						break;
					case 6:
						ans = race.memberRegistration(&fastCamel, userChoice);
						message = fastCamel.getname();
						break;
					case 7:
						ans = race.memberRegistration(&magicCarper, userChoice);
						message = magicCarper.getname();
						break;
					default:
						break;
					}
					switch (ans)
					{
					case 0: std::cout << message << " успешно зарегистирован!" << std::endl; break;
					case 1: std::cout << message << " уже зарегистирован!" << std::endl; break;
					case 2: std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl; break;
					default: break;
					}
				} while (userChoice != 0);
			}
		} while (userChoice != 2 || counterOfMembers(&race) < 2);

		for (size_t i = 0; i < race.getCountOfMembers(); i++)
		{
			fin[i] = race.result(temp[i]);
			if (fin[i] > maxTime)
			{
				maxTime = fin[i];
			}
		}

		std::cout << "Результаты гонки:" << std::endl;

		double time = 0;
		int place = 1, lastPlace = 100;

		while (time < maxTime)
		{
			time = time + 1;
			for (size_t i = 0; i < counterOfMembers(&race); i++)
			{
				if (fin[i] <= time && temp[i]->readPlace() > lastPlace)
				{
					std::cout << place << " место: " << temp[i]->getname() << ". ";
					std::cout << "Результат: " << fin[i] << std::endl;
					temp[i]->writePlace(place);
					lastPlace = place;
					place++;
				}
			}
			
		}
		
		std::cout << std::endl;

		do
		{
			std::cout << "1. Провести еще одну гонку" << std::endl;
			std::cout << "2. Выйти" << std::endl;
			std::cout << "Выберите действие: ";
			std::cin >> userChoice;
		} while (userChoice != 2 && userChoice != 1);
	} while (userChoice != 2);
	std::cout << "Game over!";
	return 0;
}


