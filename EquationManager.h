#ifndef EQUATIONMANAGER_H
#define EQUATIONMANAGER_H

#include "Equation.h"

class EquationManager {
private:
    Equation** equations;
    int size;
    int capacity;
    void resize();
public:
    EquationManager();
    ~EquationManager();
    void addEquation(Equation* eq);
    void solveAll(ostream& os) const;
    void printAll(ostream& os) const;
};

#endif