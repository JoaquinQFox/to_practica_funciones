# Práctica 03: Funciones Constantes

Programa de consola que muestra los datos de varios empleados utilizando funciones const.

## Explicación del código

- **Empleado.h y Empleado.cpp:** definen la clase `Empleado` y sus atributos privados `nombre`, `edad` y `salario`.
- **Constructor:** inicializa los datos de cada empleado.
- **Función const:** `mostrarDatos()` muestra los datos sin modificar los atributos.
- **main.cpp:** crea varios empleados y muestra sus datos.

## Compilar y ejecutar

```bash
g++ main.cpp Empleado.cpp -o main
./main
```