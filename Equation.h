#pragma once
#include <iostream>
using namespace std;

class Equation
{

public:
	//Virtual method 
	virtual void solve() = 0;

	//Віртуальний деструктор
	virtual ~Equation() {
	
	}
};

