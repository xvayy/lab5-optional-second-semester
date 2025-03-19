#include "QuadraticEquation.h"
#include <iostream>
//Конструктор з параметрами
QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
//Метод розв'язання квадратного рівняння
void QuadraticEquation::solve()
{

	double D = b * b - 4 * a * c;
	
	if (D > 0)
	{
		cout << "Solving a quadratic equation:x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
		cout << "Solving a quadratic equation:x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
	}
	else if (D == 0)
	{
		cout << "x = " << -b / (2 * a) << endl;
	}
	else
	{
		cout << "Solving a quadratic equation:The equation has no solutions" << endl;
	}
}
//Деструктор
QuadraticEquation::~QuadraticEquation()
{}

