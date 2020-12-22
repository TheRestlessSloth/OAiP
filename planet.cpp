#include "planet.h"

//constructor
planet::planet()
{
	_Name = "Earth";
	_Mass = 5.9726;
	_Radius = 6371;
	_OrbitRadius = 149.598;
	_NumOfSatelites = 1;
	calVolume();
	averageDensity();
}

planet::planet(string name, double mass, double rad, double orad, int nos)
{
	this->_Name = name;
	this->_Mass = mass;
	this->_Radius = rad;
	this->_OrbitRadius = orad;
	this->_NumOfSatelites = nos;
	calVolume();
	averageDensity();
}

//destructor
planet :: ~planet()
{
	cout << "Exterminating " << _Name << endl;
}

//set-теры
void planet::setName()
{
	cout << "Enter the planet name: ";
	cin >> _Name;
}
void planet::setMass()
{
	cout << "Enter the planet mass: ";
	cin >> _Mass;
}
void planet::setRad()
{
	cout << "Enter the planet radius: ";
	cin >> _Radius;
}
void planet::setORad()
{
	cout << "Enter the planet orbit radius: ";
	cin >> _OrbitRadius;
}
void planet::setNOS()
{
	cout << "Enter the planet number of satelites: ";
	cin >> _NumOfSatelites;
}

//get-теры
string planet::getName()
{
	return _Name;
}
double planet::getMass()
{
	return _Mass;
}
double planet::getRad()
{
	return _Radius;
}
double planet::getORad()
{
	return _OrbitRadius;
}
int planet::getNOS()
{
	return _NumOfSatelites;
}

//secret functions
void planet::calVolume()
{
	_Volume = 4.0 / 3.0 * PI * pow(_Radius, 3);
}
void planet::averageDensity()
{
	_AverageDensity = _Mass / _Volume;
}

//public functions
void planet::Print()
{
	cout << "Information about object in class" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Name: \t\t\t|" << getName() << "" << endl;
	cout << "Mass: \t\t\t|" << getMass() << "e+24 kg" << endl;
	cout << "Radius: \t\t|" << getRad() << " km" << endl;
	cout << "Orbit radius: \t\t|" << getORad() << "e+6 km" << endl;
	cout << "Number of satelites: \t|" << getNOS() << "" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Planet volume: \t\t|" << _Volume << "" << endl;
	cout << "Average density: \t|" << _AverageDensity << "" << endl;
	cout << "-----------------------------------------------\n";
	cout << endl;
}