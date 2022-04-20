#include <stdio.h>

int main()
{
   int m, n, c, d, matrix[10][10], transpuesta[10][10];  //Definicion de variables locales
                                                         //matrix es una variable que almacena los valores

                                                         //ingresados por el usuario         

                                                         //transpuesta es una varaible que almacena el resultado 

                                                        // al realizar la transpuesta de matrix  

   printf("TRANSPUESTA DE MATRICES: \n");
   printf("Ingrese el numero de filas y columnas\n");    //Pide al usuario ingresar el tamano de la matriz
   scanf("%d%d", &m, &n);                                // Lee lo ingresado por teclado.

   printf("Ingrese los elementos de una matriz\n");      //Pide al usuario ingresar uno a uno los elementos de 

                                                         // una matriz   

   for (c = 0; c < m; c++) {                             //Un bucle para almacenar los elementos de la matriz
      for(d = 0; d < n; d++)  {

         printf("A[%d][%d]= ",c,d);                           
         scanf("%d",&matrix[c][d]);}                    
    }
   for (c = 0; c < m; c++)  {                            //Un bucle para recorrer las filas y columnas
      for( d = 0 ; d < n ; d++ ) {                       // de la matriz
         transpuesta[d][c] = matrix[c][d];              //Asigna a cada elemento [d][c] de la transpuesta

       }                                                // los elementos de matrix [c] [d]
    }
   printf("La transpuesta de la matriz es:\n");

   for (c = 0; c < n; c++) {                             //Un bucle para recorrer las filas y columnas
      for (d = 0; d < m; d++){                           //de transpuesta para imprimir cada uno de
         printf("A'[%d][%d]=%d\n",c,d,transpuesta[c][d]);

        }                                                 //de sus elementos y mostrar el resultado
     
   }

   return 0;                                             //Valor de retorno de la funcion main()
}
