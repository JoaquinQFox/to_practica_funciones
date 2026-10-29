#include "Producto.h"
#include <iostream>
#include <vector>
#include "Descuento.h"
#include <iomanip>

void ejecutarSistemaProductos() {
    const std::vector<Producto> productos = {
        Producto("Teclado", 120.0),
        Producto("Mouse", 60.0),
        Producto("Monitor", 700.0),
        Producto("Audifonos", 90.0)
    };

    std::cout << "SISTEMA DE PRODUCTOS\n\nCatalogo:\n";
    for (const Producto& producto : productos) {
        producto.mostrarDatos();
    }
    
const double porcentaje = 10.0;
    std::cout << "\nDescuento del 10% en el teclado:\n"
              << "Precio final: S/ " << std::fixed << std::setprecision(2)
              << calcularDescuento(productos[0].getPrecio(), porcentaje) << '\n';
}

int main() {
    ejecutarSistemaProductos();
    return 0;
}

