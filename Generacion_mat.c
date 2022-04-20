#include <stdio.h>
#define FILAS 10
#define COLUMNAS 10

void llenarmat(int M[][COLUMNAS], int f, int c);
void imprimirmat(int M[][COLUMNAS], int f, int c);   
int main(){
    int mat[FILAS][COLUMNAS];
    int nf,nc;
    
    printf("ingrese dimesiones para la matriz");
    scanf("%d %d",&nf,&nc);
    llenarmat(mat,nf,nc);
    imprimirmat(mat,nf,nc);
    
    
    
    return 0;
}
void llenarmat(int M[][COLUMNAS], int f, int c){
    int i,j;
    printf("ingrese los datos de la matriz\n");
        for(i=0;i<f;i++){
            for(j=0;j<c;j++){
                printf("[%d][%d]=",i,j );
                scanf("%d",&M[i][j]);
            }
        }
            return;
}

void imprimirmat(int M[][COLUMNAS], int f, int c){
    int i,j;
    printf("Los datos de la matriz son:\n");
        for(i=0;i<f;i++){
            for(j=0;j<c;j++){
                printf("%d ",M[i][j]);
            }
            printf("\n");
        }}
               

