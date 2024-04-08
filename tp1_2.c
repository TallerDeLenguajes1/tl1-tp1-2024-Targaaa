// tl1-tp1-2024-JavierRodriguez3
#include <stdio.h>

int main()
{
    int num1, num2, cua;

    do
    {
        printf("\nIngrese su primer numero: ");
        scanf("%d", &num1);
    } while (num1 < 1);

    do
    {
        printf("\nIngrese su segundo numero: ");
        scanf("%d", &num2);
    } while (num2 < 1);

    cua = cuadrado(num1);
    printf("\nEl cuadrado es: %d", cua);
    cuadradoConDireccion(&num2);
    printf("\nEl cuadrado es: %d", num2);

    printf("\nLa direccion de las variables es\nnumero1: ");
    direccionVariable(&num1);

    printf("\nLa direccion de las variables es\nnumero2: ");
    direccionVariable(&num2);

    printf("\nInvirtiendo los valores\n");
    InvertirValores(&num1, &num2);
    printf("\nNumero 1 = %d \nNumero2 = %d",num1,num2);
    OrdenAscendente(&num1,&num2);
    printf("\nOrden ascendente de los numeros: %d y %d",num1,num2);
}

int cuadrado(int a)
{
    int cuad;
    cuad = a * a;
    return (cuad);
}

void cuadradoConDireccion(int *a)
{
    *a = (*a) * (*a);
}

void direccionVariable(int *a)
{
    printf("\nDireccion de la variable %p", a);
    printf("\nContenido de la variable %d", *a);
}

void InvertirValores(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void OrdenAscendente(int *a, int *b)
{
    int aux;
    if (*a >= *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
