#include "EquationManager.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    EquationManager manager;

    manager.addEquation(new LinearEquation(2, -4));
    manager.addEquation(new QuadraticEquation(1, -3, 2));

    // Вивід в консоль
    manager.printAll(cout);
    manager.solveAll(cout);

    // Вивід у файл
    ofstream file("output.txt");
    manager.printAll(file);
    manager.solveAll(file);
    file.close();
    
    return 0;
}
