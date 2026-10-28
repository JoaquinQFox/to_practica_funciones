
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
private:
    std::string nombre;
    int edad;
    double salario;

public:
    // Constructor de la clase Empleado
    Empleado(std::string nombre, int edad, double salario);

    // Metodo que implementara la Persona 2
    void mostrarDatos() const;
};

#endif
