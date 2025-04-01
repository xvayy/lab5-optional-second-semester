#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <string>
using namespace std;

class Equation {
public:
    virtual string solve() = 0;
    virtual void print(ostream& os) const = 0;
    virtual ~Equation() = default;
};

#endif