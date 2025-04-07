#include <stdio.h>

int main() {

    int numero, *puntero;

    //apartado a
    printf("Hola mundo \n");

    //apartado e
    puntero = &numero;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    //El contenido del puntero
    printf("Contenido del puntero: %d \n", *puntero);
    //La dirección de memoria almacenada por el puntero
    printf("Direccion de memoria almacenada por el puntero: %p \n", puntero);
    //la dirección de memoria de la variable
    printf("Direccion de memoria de la variable: %p \n", &numero);
    //la dirección de memoria del puntero.
    printf("Direccion de memoria del puntero: %p \n", &puntero);
    //el tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("Tamaño de memoria utilizado por esa variable usando la función sizeof(): %lu \n", sizeof(numero));


    return 0;
}