#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iosfwd>
#include <string>

class Producto {

private:
    std::string nombre;
    double precio;

public:
    Producto(const std::string& nombre, double precio);
    double getPrecio() const;
    void mostrarDatos() const;

    Producto operator+(const Producto& otro) const;

    friend int compararPrecios(const Producto& primero, const Producto& segundo);
};
#endif
