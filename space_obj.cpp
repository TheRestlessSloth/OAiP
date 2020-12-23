#include "space_obj.h"

//constructor
space_obj::space_obj()
{
	_Name = "Earth";
	_Mass = 5.9726;
	_Radius = 6371;
	calVolume();
	averageDensity();
}

space_obj::space_obj(string name, double mass, double rad)
{
	this->_Name = name;
	this->_Mass = mass;
	this->_Radius = rad;
	calVolume();
	averageDensity();
}

//destructor
space_obj :: ~space_obj()
{
	cout << "Exterminating " << _Name << endl;
}

//set-теры
void space_obj::setName(string Name)
{
	_Name = Name;
}
void space_obj::setMass(double Mass)
{
	_Mass = Mass;
}
void space_obj::setRad(double Radius)
{
	_Radius = Radius;
}

//get-теры
string space_obj::getName()
{
	return _Name;
}
double space_obj::getMass()
{
	return _Mass;
}
double space_obj::getRad()
{
	return _Radius;
}
double space_obj::getVolume()
{
	return _Volume;
}
double space_obj::getAvDen()
{
	return _AverageDensity;
}

//secret functions
void space_obj::calVolume()
{
	_Volume = 4.0 / 3.0 * PI * pow(_Radius, 3);
}
void space_obj::averageDensity()
{
	_AverageDensity = _Mass / _Volume;
}
