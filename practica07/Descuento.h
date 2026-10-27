#ifndef DESCUENTO_H
#define DESCUENTO_H
#include <stdexcept>

inline double calcularDescuento(double precio, double porcentaje) {
    if (precio < 0.0 || porcentaje < 0.0 || porcentaje > 100.0) {
        throw std::invalid_argument("Precio o porcentaje de descuento invalido.");
    }
    return precio * (1.0 - porcentaje / 100.0);
}
#endif
