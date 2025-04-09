#include <stdio.h>

int potencia_cuadrado (int a);
void cuadrado (int a);
void invertir (int *p_a, int *p_b);
void orden(int *p_a, int *p_b);

int main () {

    int a,b, resultado;
    int *p_a, *p_b;

    printf("Ingrese un numero:\n");
    scanf("%d", &a);

    printf("Ingrese otro numero:\n");
    scanf("%d", &b);

    //a

    resultado = potencia_cuadrado(a);
    printf("El cuadrado de un numero: %d \n", resultado);

    //b

    cuadrado(a);

    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable

    int *puntero;
    puntero = &a;
    printf("Direccion de la variable:%p \n", puntero);
    printf("Contenido de la variable: %d \n", *puntero);

    //d
    p_a =&a;
    p_b=&b;

    invertir(p_a, p_b);

    printf("Numeros invertidos: a = %d, b = %d\n", a, b);

    //e
    orden(p_a, p_b);

    printf("Después de ordenar: a = %d, b = %d\n", a, b);


    return 0;
}

//a) Haga una función que devuelva el cuadrado de un número

int potencia_cuadrado (int a) {
    
    int resultado=1;

    for (int i = 0; i < 2; i++)
    {

        resultado = resultado * a;
    }
    
    return resultado;
}

//b) Haga la función anterior, pero devolviendo un tipo void

void cuadrado (int a) {

    int resultado;

    resultado = potencia_cuadrado(a);

    printf("Resultado de la potencia al cuadrado: %d \n", resultado);
}

//d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
//void Invertir(a,b) //deberá devolver en el valor de a en la
//variable b, y en el valor de b el valor de a

void invertir(int *p_a, int *p_b) {
    int c = *p_a;
    *p_a = *p_b;
    *p_b = c;

    printf("Numeros invertidos dentro de la funcion: a = %d, b = %d \n", *p_a, *p_b);
}

//e) Dado dos parámetros de entrada, deberá devolverlos de forma
//ordenada, en el primer parámetro el menor y en el segundo el mayor.
//void orden(a,b) //deberá devolver en el valor de a el valor más
//chico, y en el valor de b el valor más grande

void orden(int *p_a, int *p_b) {

if (*p_a > *p_b)
{
    int c = *p_a;
    *p_a = * p_b;
    *p_b = c;
}

printf("Parametros ordenados: %d %d \n", *p_a, *p_b);


}