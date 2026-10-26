#include "Producto.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>

Producto::Producto(const std::string& nombre, double precio)
    : nombre(nombre), precio(precio) {}

double Producto::getPrecio() const {
    return precio;
}

void Producto::mostrarDatos() const {
    std::cout << nombre << " : Precio: S/ "
          << std::fixed << std::setprecision(2) << precio << "\n";
}