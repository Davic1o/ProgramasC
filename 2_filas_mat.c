#include <stdio.h>
#define LMAX 50

//Funciones que debe implementar

int validar(int f, int fx);
void ingresar(int df,int dc,int m[][dc]);
void sumarFilas(int df,int dc,int m[][dc],int a, int b);

int main()
{

   int df,dc,fila1,fila2, m1[LMAX][LMAX];
   printf("SUMA DE 2 FILAS DE UNA MATRIZ");
   printf("\nIngrese la dimension de filas y columnas: ");
   scanf("%d %d",&df,&dc);
   printf("Ingrese la matriz\n");
   ingresar(df,dc,m1);
   printf("Ingrese el numero de las 2 filas para la suma:");
   scanf("%d %d",&fila1,&fila2);
   if (validar(df, fila1)==1||validar(df, fila2)==1){
       printf("Las filas solicitadas NO existen en la matriz!!!");
   }else{
    printf("La suma de las dos filas es:\n");
    sumarFilas(df,dc, m1,fila1,fila2);
   }
   //Complete el codigo de acuerdo a lo solicitado

   return 0;
}

//Implemente las funciones solicitadas
void ingresar(int df,int dc,int m[df][dc]){
    int i,j;
	for(i=0;i<df;i++){
        for(j=0;j<dc;j++){
            printf("m[%d][%d]= ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
int validar(int f, int fx){
    if(f > fx){
        return 0;
    }else{
    return 1;
    }
    
    
}
void sumarFilas(int df,int dc,int m[][dc],int a, int b){
int suma=0,i;
    for(i=0;i<dc;i++){
        suma=m[a][i]+m[b][i];
    
        printf("suma[%d]= %d\n",i, suma);        
            }}




