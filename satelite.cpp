#include "satelite.h"

//setters

void satelite::setReference(string RefersTo)
{
	_RefersTo = RefersTo;
}
void satelite::setRobAmount(int RobotAmount)
{
	_RobotAmount = RobotAmount;
}

//getters
string satelite::getReference()
{
	return _RefersTo;
}
int satelite::getRobAmount()
{
	return _RobotAmount;
}

//---------------Вывод-------------
void satelite::Print()
{
	cout << "Satelite" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Name: \t\t\t|" << getName() << "" << endl;
	cout << "Mass: \t\t\t|" << getMass() << "e+24 kg" << endl;
	cout << "Radius: \t\t|" << getRad() << " km" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Satelite volume: \t\t|" << getVolume() << "" << endl;
	cout << "Average density: \t|" << getAvDen() << "" << endl;
	cout << "Refers to: \t\t|" << getReference() << "" << endl;
	cout << "Amount of robots: |" << getRobAmount() << "" << endl;
	cout << "-----------------------------------------------\n";
	cout << endl;
}

