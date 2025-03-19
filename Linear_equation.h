#pragma once
#include "Equation.h"

class Linear_equation : public Equation {

	double a, b;
public:
	//Конструктор з параметрами
	Linear_equation(double a, double b);
	//Метод розв'язання лінійного рівняння
	void solve() override;
	//Деструктор
	~Linear_equation();


};

