#pragma once

#include <string>
#include <iostream>

#define PI 3.14159265358979328462643

using namespace std;

class space_obj
{
public:
	space_obj();
	space_obj(string name, double mass, double rad);
	~space_obj();
	//---------------Имя-------------------------------
	void setName(string Name);
	string getName();
	//---------------Масса-----------------------------
	void setMass(double Mass);
	double getMass();
	//---------------Радиус объекта--------------------
	void setRad(double Radius);
	double getRad();
	//--------------------------------------------------
	double getVolume();
	double getAvDen();
	//---------------Вывод-(реализация полиморфизма)---
	virtual void Print() { ; }

protected:
	//----------------Скрытые ф-ции--------------------
	void calVolume();
	void averageDensity();
private:
	//----------------Характеристики-------------------
	string _Name;
	double _Mass;
	double _Radius;
	double _OrbitRadius;
	double _Volume;
	double _AverageDensity;
};