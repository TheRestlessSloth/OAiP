#include "star.h"

//setters
void star::setSystem(string System)
{
	_System = System;
}
void star::setAsterism(string Asterism)
{
	_Asterism = Asterism;
}
void star::setTemperature(double Temperature)
{
	_Temperature = Temperature;
}

//getters
string star::getSystem()
{
	return _System;
}
string star::getAsterism()
{
	return _Asterism;
}
double star::getTemperature()
{
	return _Temperature;
}

//---------------Вывод-------------
void star::Print()
{
	cout << "Star" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Name: \t\t\t|" << getName() << "" << endl;
	cout << "Mass: \t\t\t|" << getMass() << "e+24 kg" << endl;
	cout << "Radius: \t\t|" << getRad() << " km" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Star volume: \t\t|" << getVolume() << "" << endl;
	cout << "Average density: \t|" << getAvDen() << "" << endl;
	cout << "Temperature: \t\t|" << getTemperature() << "" << endl;
	cout << "System: \t|" << getSystem() << "" << endl;
	cout << "Asterism: \t\t|" << getAsterism() << "" << endl;
	cout << "-----------------------------------------------\n";
	cout << endl;
}