#pragma once

#include "space_obj.h"

class star : public space_obj
{
public:
	//---------------Имя системы--------------
	void setSystem(string System);
	string getSystem();
	//---------------Имя созвездия--------------
	void setAsterism(string Asterism);
	string getAsterism();
	//---------------Температура-
	void setTemperature(double Temperature);
	double getTemperature();
	//---------------Вывод-------------
	void Print();

private:
	//----------------Характеристики---
	string _System;
	string _Asterism;
	double _Temperature;
};
