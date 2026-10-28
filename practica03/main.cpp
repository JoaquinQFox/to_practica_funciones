#include "Empleado.h"
#include <iostream>

int main() {
    const Empleado empleado1("Ana", 25, 2500.0);
    const Empleado empleado2("Luis", 32, 3400.0);
    const Empleado empleado3("Maria", 28, 2900.0);

    std::cout << "PRACTICA 03 - EMPLEADOS\n";
    empleado1.mostrarDatos();
    empleado2.mostrarDatos();
    empleado3.mostrarDatos();
    return 0;
}
