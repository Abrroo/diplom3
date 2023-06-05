#pragma once
#include <string>

using namespace std;

class Transport
{
public:
	Transport();
	Transport(int speed);
	string getname();
	virtual int getTypeOfTransport();
	virtual double timeOfRace(int distance);
	virtual double timeOfFly(int distance);
	void writePlace(int place);
	int readPlace();
protected:
	string name;
	int speed = 1;
private:
	int place = 101, type = 0;

};