#pragma once

#include "space_obj.h"

class satelite : public space_obj
{
public:
	//---------------Имя системы--------------
	string getReference();
	void setReference(string RefersTo);
	//---------------Температура-
	int getRobAmount();
	void setRobAmount(int RobotAmount);
	//---------------Вывод-------------
	void Print();

private:
	//----------------Характеристики---
	string _RefersTo;
	int _RobotAmount;
};
