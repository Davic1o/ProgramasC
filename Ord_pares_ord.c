#include<stdio.h>

#include<stdlib.h>       //Requerida para el uso de la funci�n rand

#include<math.h>       //Requerida par el uso de la funci�n  sqrt

#include<time.h>        //Requerida para el uso de la funci�n time

#define LONG_VECTOR 10



typedef struct{             //Definicion de la estructura ParOrdenado

    int x;

    int y;

}ParOrdenado;



void imprimirPO(ParOrdenado lista[]);  //Funci�n que imprime la lista de pares ordenados y su distancia respecto al origen

void generarPO(ParOrdenado lista[]);   //Genera 10 pares ordenados de forma aleatoria 

float distancia(ParOrdenado po);       //Calcula la distancia de un PO respecto al origen

void ordenarPO(ParOrdenado lista[]);   //Ordena la lista de Pares Ordenados



int main(){



    ParOrdenado lista[LONG_VECTOR];      //Declaraci�n del vector de Pares Ordenados

    generarPO(lista);                    //Se invoca la funci�n para generar los Pares Ordenados

    printf("\n\nPares ordenados generados:\n\n"); 

    imprimirPO(lista);                   //Se imprime la lista

    ordenarPO(lista);                    //Se ordena la lista

    printf("\n\nLista ordenada:\n\n");

    imprimirPO(lista);                   //Se imprime la lista ordenada



    return 0;

}



void generarPO(ParOrdenado lista[]){

    int i;

    srand(time(NULL));                    //Se asigna una semilla en funci�n de la hora actual, con esto se generan n�meros aleatorios diferentes en cada ejecuci�n

    for(i=0; i<LONG_VECTOR; i++){       //Se recorre la lista lista de Pares Ordenados

        lista[i].x = rand()%21;         //Se genera n�meros aleatorios entre 0 y 20

        lista[i].y = rand()%21;         //Se genera n�meros aleatorios entre 0 y 20

    }

}



void imprimirPO(ParOrdenado lista[]){

    int i;

    for(i=0; i<LONG_VECTOR; i++){       //Se recorre la lista lista de Pares Ordenados

        printf("(%d, %d): %.3f\n", lista[i].x, lista[i].y, distancia(lista[i]));  //Se imprime la lista lista de Pares Ordenados

    }

}



float distancia(ParOrdenado po){

    return sqrt(po.x * po.x  + po.y * po.y);    //Se calcula la distancia respecto al origen

}



void ordenarPO(ParOrdenado lista[]){

    int i, j;

    ParOrdenado aux;

    for(i=0; i<LONG_VECTOR-1; i++){             //Indice que referencia al n�mero menor en cada iteraci�n del lazo interno 

        for(j=i+1; j<LONG_VECTOR; j++){         //Indice que recorre en b�squeda del n�mero menor

            if(distancia(lista[i]) > distancia(lista[j])){   //Permite  ordenar de forma ascendente en funci�n de la dsitancia

                aux = lista[i];                 //Se intercambian los pares ordenados 

                lista[i] = lista[j];

                lista[j] = aux;

            }

        }

    }

}
