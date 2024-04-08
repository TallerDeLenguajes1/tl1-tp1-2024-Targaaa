// tp1
#include <stdio.h>
int main(){
    printf("Hola mundo");
    int variable=3;
    int *p = &variable;

    printf("\nContenido del puntero: %d",*p);
    printf("\nDireccion de memoria almacenada del puntero: %d",p);
    printf("\nDireccion de memoria de la variable: %p",&variable);
    printf("\nLa direccion de memoria del puntero: %p", &p);

    printf("\nMemoria ultilizada %d", sizeof(variable));

    
    
    
    return(0);
}