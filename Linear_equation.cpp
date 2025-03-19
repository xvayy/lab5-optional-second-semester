#include "Linear_equation.h"
#include <iostream>
using namespace std;
//Конструктор з параметрами
Linear_equation::Linear_equation(double a, double b)
{
	this->a = a;
	this->b = b;
}
//Метод розв'язання лінійного рівняння
void Linear_equation::solve()
{
	if (a != 0)
	{
		cout << "Solving a linear equation:x = " << -b / a << endl;
	}
	else
	{
		if (b == 0)
		{
			cout << "Solving a linear equation:x=R" << endl;
		}
		else
		{
			cout << "Solving a linear equation:The equation has no solutions" << endl;
		}
	}
}
//Деструктор
Linear_equation::~Linear_equation() {}


