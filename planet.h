#pragma once

#include "space_obj.h"

class planet : public space_obj
{
public:
	//---------------Имя--------------
	void setPlanetType(string PlanetType);
	string getPlanetType();
	//---------------Радиус траектории-
	void setORad(double OrbitRadius);
	double getORad();
	//---------------Популяция----
	void setPopulation(int Population);
	int getPopulation();
	//---------------Наличие атмосферы---
	void setAtmosphere(bool Atmosphere);
	bool getAtmosphere();
	//---------------Вывод-------------
	void Print();

private:
	//----------------Характеристики---
	string _PlanetType;
	double _OrbitRadius;
	int _Population;
	bool _Atmosphere;
};
