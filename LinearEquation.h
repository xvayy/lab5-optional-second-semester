#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

#include "Equation.h"

class LinearEquation : public Equation {
private:
    double a, b;
public:
    LinearEquation(double a, double b);
    string solve() override;
    void print(ostream& os) const override;
};

#endif
