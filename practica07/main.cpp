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

    std::cout << "\nComparacion entre teclado y mouse:\n";
    const int resultado = compararPrecios(productos[0], productos[1]);
    if (resultado < 0) {
        std::cout << "El teclado es mas barato que el mouse.\n";
    } else if (resultado > 0) {
        std::cout << "El teclado es mas caro que el mouse.\n";
    } else {
        std::cout << "Ambos tienen el mismo precio.\n";
    }

    const double precioMaximo = 100.0;

    auto filtrarPorPrecio = [precioMaximo](const std::vector<Producto>& lista) {
        std::vector<Producto> resultado;

        for (const Producto& producto : lista) {
            if (producto.getPrecio() <= precioMaximo) {
                resultado.push_back(producto);
            }
        }

        return resultado;
    };

    std::vector<Producto> filtrados = filtrarPorPrecio(productos);

    std::cout << "\nProductos con precio menor o igual a S/ "
              << precioMaximo << ":\n";

    for (const Producto& producto : filtrados) {
        producto.mostrarDatos();;
    }
}

int main() {
    ejecutarSistemaProductos();
    return 0;
}

