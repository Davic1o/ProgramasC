#include <stdio.h>

#include <string.h>



#define LONGITUD 30//Longitud maxima para cadenas



struct trabajador//Definicion de estructura de trabajador

{

    char nombre[LONGITUD];

    int id;

};

struct trabajador nuevo(void); //Prototipo de funcion para ingreso de nuevo trabajador

void visualizar (struct trabajador);//Prototipo de funcion visualizar trabajador

void main (void)//inicio de funcion main

{

    struct trabajador trabajador1;//definicion de trabajador1

    struct trabajador trabajador2;//definicion de trabajador2

    trabajador1=nuevo();//llamada a funcion nuevo

    trabajador2=nuevo();//llamada a funcion nuevo

    printf("\nLISTA DE TRABAJADORES: \n");

    visualizar(trabajador1);//llamada a funcion visualizar

    visualizar(trabajador2);//llamada a funcion visualizar

}



struct trabajador nuevo(void)//definicion de funcion nuevo

{

    struct trabajador empleado;//declaracion de variable auxiliar empleado

    printf("\nDatos del Trabajador. \nIntroduce el nombre: ");

    char nombreTemp [LONGITUD];//variable auxiliar para introducir el nombre

    scanf("%s", &nombreTemp);//ingreso del nombre por consola

    strcpy(empleado.nombre,nombreTemp);//copia de cadena nombre

    printf("Introduce el id: ");

    scanf("%d", &empleado.id);//lectura de id de empleado

    fflush(stdin);//liberacion del buffer de entrada

    return(empleado);//se retorna un empleado

}

void visualizar(struct trabajador empleado)//definicion de funcion de visualizacion de empleados

{

    printf("\n");//

    printf("\tNombre: %s \n", empleado.nombre);//Impresion de nombre de empleado

    printf("\tId: %d \n", empleado.id);//Impresion de id de empleado


}
