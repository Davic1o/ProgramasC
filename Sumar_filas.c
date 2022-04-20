#include <stdio.h>

//Declaración de la funciones que se debe implementar

void ingresar(int df,int dc,int [df][dc]);

int sumarFila(int f,int c, int [f][c],int);



int main()

{

   int df,dc,fila,suma;                                                                   //Variables que se van a utilizar

   printf("SUMAR ELEMENTOS DE LA FILA DE UNA MATRIZ");

   printf("\nIngrese la dimension de filas y columnas: ");                 //Solicitud de numero de filas y columnas para la matriz

   scanf("%d%d",&df,&dc);

   int m1[df][dc];                                                                        //Declaración de la matriz una vez conocidas sus dimensiones

   printf("Ingrese la matriz\n");


 /*Invocacion de la funcion ingresar(), la funcion solicita como argumentos

    dimension de filas y columnas, y la matriz en la cual se almacenaran los valores*/

   ingresar(df,dc,m1);                                                                

   printf("Ingrese la fila que desea sumar: ");                                 //Solicitud del numero de fila que desea sumar

   scanf("%d",&fila);

   if(fila<=df)                                                                             //Verificacion para determinar si la fila existe en la matriz

   {

    /* Invocacion de la funcion sumarFila(), esta funcion requiere

       como argumentos dimension de filas y columnas, matriz de la cual se

        va a sumar la fila, y el numero de fila. Como salida o retorno la funcion

        devuelve un valor entero que corresponde a la suma de los elementos de 

        la fila. El valor entero de retorno se almacena en la variable suma. */

       suma=sumarFila(df,dc,m1,fila);                                              

       printf("La suma es:%d",suma);

   }

   else

   {

    printf("Fila No existe!!!");                                                             //Si la fila no existe se imprime el mensaje solicitado

   }



   return 0;

}



 //Implementacion de las funciones solicitadas



 /*Funcion ingresar(), requiere como parametros de entrada dos valores enteros y

   una matriz de enteros. 

   int f :   Corresponden a la dimension de filas de la matriz

   int c :  Corresponden a la dimension de columnas de la matri

   int matriz [f][c] : Es la matriz de enteros en la cual se amacenaran los valores ingresados  */

void ingresar(int f,int c,int matriz[f][c]){

  int i,j;                                                                                          //variables para el lazo anidado

  for(i=0;i<f;i++)                                                                             //Definicion de lazo externo para las filas de la matriz
{
    for(j=0;j<c;j++){                                                                        //Definicion de lazo interno para las columnas de la matriz       {

      printf("m[%d][%d]= ",i,j);                                                        //Solcitud de elementos de matriz en posicion [fila][columna]

      scanf("%d",&matriz[i][j]);                                                        //Los valores ingresados se almacenan en variable matriz

      }}

  }
int sumarFila(int f,int c, int matriz[f][c],int fila)

{

    int i,j,s=0;                                                                                                //Variables para el lazo anidado y la suma

    for(i=0;i<f;i++)                                                                                         //Definicion de lazo externo para las filas 

    {

        for(j=0;j<c;j++)                                                                                     //Definicion de lazo externo para las columnas

        {

          if(i==fila)                                                                                          //Condicion para sumar los elementos de la 

                                                                                                                 //fila solicitada

          {

           s=s+matriz[i][j];                                                                                //Suma de elementos  de la fila

          }



        }

    }

    return s;                                                                                               //Retorno de la suma de los elemenots de la fila


}


