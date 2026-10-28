
#include "Empleado.h"
#include <iomanip>
#include <iostream>

// Constructor que inicializa los atributos del empleado
Empleado::Empleado(std::string nombre, int edad, double salario)
    : nombre(nombre), edad(edad), salario(salario) {
}

void Empleado::mostrarDatos() const {
    std::cout << "Nombre: " << nombre
              << " | Edad: " << edad
              << " | Salario: S/ " << std::fixed << std::setprecision(2)
              << salario << '\n';
}