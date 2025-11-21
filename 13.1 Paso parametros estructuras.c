#include <stdio.h>
#include <string.h>

struct Producto 
{
    char nombre[40];
    float precio;
    int existencia;
};

void mostrarProducto(struct Producto p) 
{
    printf("Nombre: %s\n", p.nombre);
    printf("Precio: %.2f\n", p.precio);
    printf("Existencia: %d\n", p.existencia);
}

void actualizarPrecio(struct Producto *p, float nuevoPrecio) 
{
    p->precio = nuevoPrecio;
}

void agregarInventario(struct Producto *p, int cantidad) 
{
    p->existencia += cantidad;
}

struct Producto crearProducto(char nombre[], float precio, int existencia) 
{
    struct Producto nuevo;
    strcpy(nuevo.nombre, nombre);
    nuevo.precio = precio;
    nuevo.existencia = existencia;
    return nuevo;
}

int main() 
{
    struct Producto p;

    p = crearProducto("Laptop", 25000, 7);
    printf("\n-- Producto inicial --\n");
    mostrarProducto(p);
    actualizarPrecio(&p, 32000);
    agregarInventario(&p, 3);
    printf("\n--- Producto actualizado ---\n");
    mostrarProducto(p);

    return 0;
}