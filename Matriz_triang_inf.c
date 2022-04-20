#include <stdio.h>
#define MAX 50

//Funciones que debe implementar

char validar(int f, int c);
void ingresar(int df,int dc,int m[df][dc]);
void verificar(int df,int dc,int m[df][dc]);

int main(){
    int df,dc, m[MAX][MAX];

   //Complete el codigo de acuerdo a lo solicitado
   printf("VERIFICAR MATRIZ TRIANGULAR INFERIOR");
   printf("\nIngrese la dimension de filas y columnas: ");
   scanf("%d %d",&df,&dc);
   if(validar(df,dc)==0){
   }else{
    ingresar(df,dc,m);
   //Complete el codigo de acuerdo a lo solicitado
    verificar(df,dc,m);
}
   return 0;
}

char validar(int f, int c){
    if(f != c){
        printf("Dimensiones incorrectas!!!");
        return 0;
    }else{
          printf("ingrese la matriz\n");
    return 1;
    }
    
    
}
void ingresar(int df,int dc,int m[df][dc]){
    int i,j;
     for(i=0;i<df;i++){
        for(j=0;j<df;j++){
            printf("m[%d][%d]= ",i,j);
            scanf("%d",&m[i][j]);
    
}}}
void verificar(int df,int dc,int m[df][dc]){
    int i,j,suma=0,a,b;
    for(i=0;i<df;i++){
        for(j=0;j<dc;j++){
        }if(i<j){
        suma=m[a][j]+m[i][b];   
        }
    }
        if(suma=0){
        printf("si es triangular");
        }else{
        printf("si es triangular");
        }}


