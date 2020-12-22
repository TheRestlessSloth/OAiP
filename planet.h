#pragma once

#include <string>
#include <iostream>

#define PI 3.14159265358979328462643

using namespace std;

class planet
{
public:
	planet();
	planet(string name, double mass, double rad, double orad, int nos);
	~planet();
	//---------------Имя--------------
	string getName();
	void setName();
	//---------------Масса--------------
	double getMass();
	void setMass();
	//---------------Радиус объекта----
	double getRad();
	void setRad();
	//---------------Радиус траектории-
	double getORad();
	void setORad();
	//---------------К-во спутников----
	int getNOS();
	void setNOS();
	//---------------Вывод-------------
	void Print();

private:
	//----------------Скрытые ф-ции----
	void calVolume();
	void averageDensity();
	//----------------Характеристики---
	string _Name;
	double _Mass;
	double _Radius;
	double _OrbitRadius;
	int _NumOfSatelites;
	double _Volume;
	double _AverageDensity;
};
