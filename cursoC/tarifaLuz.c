//ingresa por teclado el nombre la edad y el sexo de cualquier persona
//imprima su nombre solo si la persona es mayor de edad y de sexo femenino

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nombre[20];
    int edad;
    char sexo[20];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese su sexo: ");
    scanf("%s", sexo);

    if(edad >= 18 && sexo == "femenino"){
        printf("Su nombre es: %s", nombre);
    }else {
        printf("No cumple con los requisitos");
    }
    return 0;
}