#include "LinearEquation.h"
#include <iostream>

using namespace std;

LinearEquation::LinearEquation(double a, double b) {
    this->a = a;
    this->b = b;
}

string LinearEquation::solve() {
    if (a != 0) {
        double x = -b / a;
        return "Solution: " + to_string(x);
    } else {
        return "No solution or infinitely many solutions.";
    }
}

void LinearEquation::print(ostream& os) const {
    os << "Linear Equation: " << a << "x + " << b << " = 0" << endl;
}

