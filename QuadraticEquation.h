#pragma once
#include "Equation.h"
#include <iostream>

using namespace std;
class QuadraticEquation : public Equation 
{
	double a, b, c;
public:
	//Конструктор з параметрами
	QuadraticEquation(double a, double b, double c);
	//Метод розв'язання квадратного рівняння
	void solve()override;
	//Деструктор
	~QuadraticEquation();

};

