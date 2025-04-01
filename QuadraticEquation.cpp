#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>

using namespace std;

QuadraticEquation::QuadraticEquation(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
}

string QuadraticEquation::solve() {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        return "Two solutions: " + to_string(x1) + " and " + to_string(x2);
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        return "One solution: " + to_string(x);
    } else {
        return "No real solution.";
    }
}

void QuadraticEquation::print(ostream& os) const {
    os << "Quadratic Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}
