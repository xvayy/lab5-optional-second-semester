#include <iostream>
#include "Equation.h"
#include "Linear_equation.h"
#include "QuadraticEquation.h"
using namespace std;
int main() {	
	double a, b, c;
	//Масив вказівників на об'єкти базового класу
	Equation* equations[2]; 

	//Лінійне рівняння
	cout << "Linear equation" << endl;
	//Введення коефіцієнтів 
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	//Створення об'єкта лінійного рівняння
	equations[0] = new Linear_equation(a, b);

	//Квадратне рівняння
	cout << "Quadratic equation" << endl;
	//Введення коефіцієнтів

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	//Створення об'єкта квадратного рівняння
	equations[1] = new QuadraticEquation(a, b, c);
	//Розв'язання рівнянь

	for (int i = 0; i < 2; i++)
	{
		equations[i]->solve();
	}
	//Виклик деструкторів
	for (int i = 0; i < 2; i++)
	{
		delete equations[i];
	}

}

