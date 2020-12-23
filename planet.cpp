#include "planet.h"

//setters
void planet::setPlanetType(string PlanetType)
{
	_PlanetType = PlanetType;
}
void planet::setORad(double OrbitRadius)
{
	_OrbitRadius = OrbitRadius;
}
void planet::setPopulation(int Population)
{
	_Population = Population;
}
void planet::setAtmosphere(bool Atmosphere)
{
	_Atmosphere = Atmosphere;
}

//getters
double planet::getORad()
{
	return _OrbitRadius;
}
string planet::getPlanetType()
{
	return _PlanetType;
}
int planet::getPopulation()
{
	return _Population;
}
bool planet::getAtmosphere()
{
	return _Atmosphere;
}

//---------------Вывод-------------
void planet::Print()
{
	cout << "Planet" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Name: \t\t\t|" << getName() << "" << endl;
	cout << "Mass: \t\t\t|" << getMass() << "e+24 kg" << endl;
	cout << "Radius: \t\t|" << getRad() << " km" << endl;
	cout << "-----------------------------------------------\n";
	cout << "Planet volume: \t\t|" << getVolume() << "" << endl;
	cout << "Average density: \t|" << getAvDen() << "" << endl;
	cout << "Planet type:  \t|\t|" << getPlanetType() << "" << endl;
	cout << "Orbit Radius: \t|   " << getORad() << "" << endl;
	cout << "Population: \t|	 " << getPopulation() << "" << endl;
	cout << "Have atmosphere? \t|" << getAtmosphere() << "" << endl;
	cout << "-----------------------------------------------\n";
	cout << endl;
}