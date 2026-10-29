#include "Producto.h"
#include <iostream>
#include <vector>

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
}

int main() {
    ejecutarSistemaProductos();
    return 0;
}
