#include "EquationManager.h"
#include <iostream>

EquationManager::EquationManager() {
    this->size = 0;
    this->capacity = 2;
    equations = new Equation*[capacity];
}

EquationManager::~EquationManager() {
    for (int i = 0; i < size; i++) {
        delete equations[i];
    }
    delete[] equations;
}

void EquationManager::resize() {
    capacity *= 2;
    Equation** temp = new Equation*[capacity];
    for (int i = 0; i < size; i++) {
        temp[i] = equations[i];
    }
    delete[] equations;
    equations = temp;
}

void EquationManager::addEquation(Equation* eq) {
    if (size == capacity) {
        resize();
    }
    equations[size++] = eq;
}

void EquationManager::solveAll(ostream& os) const {
    for (int i = 0; i < size; i++) {
        os << equations[i]->solve() << endl;
    }
}

void EquationManager::printAll(ostream& os) const {
    for (int i = 0; i < size; i++) {
        equations[i]->print(os);
    }
}