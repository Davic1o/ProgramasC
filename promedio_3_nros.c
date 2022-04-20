#include<stdio.h>

float promedio(float ,float , float );                                                                 //Declaracion de la funcion promedio()

int main()                                                                                                    //Declaracion de la funcion main()

{                                                                                                   

    float n1,n2,n3;                                                                                         //Declaracion de las variables para almacenar

    printf("PROGRAMA PARA CALCULAR EL PROMEDIO");                           //Titulo del programa

    printf("\nIngrese tres numeros reales: ");                                                     //Solicitud de ingreso de 3 numeros reales

    scanf("%f%f%f",&n1,&n2,&n3);                                                                 // Lectura y almacenamiento de los valores

    printf("El promedio de los tres numeros es %.2f",promedio(n1,n2,n3));          // Invocacion de la funcion promedio()

    return 0;                                                                                               // Finalización de la funcion main()

}
float promedio(float a,float b, float c)                                                        // Encabezado de la funcion

{                                                                                                           // Inicio del cuerpo de la funcion

    float p;                                                                                              // Variable para almacenar el resultado del promedio

    p=(a+b+c)/3;                                                                                     // Calculo del promedio

    return p;
}
