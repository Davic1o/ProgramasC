# include <stdio.h>

int main(){
    int m[50][50];
    int fila,columna,fx,cx;
    int i,j,a;
    float suma,p;
    printf("Ingrese n fila: ");
    scanf("%d",&fila);
     printf("Ingrese m columnas:  ");
     scanf("%d",&columna);
     printf("\n------ingrese datos matriz ---------------\n");
    for ( i = 0; i < fila; i++){
            for ( j = 0;  j< columna; j++){
                    printf("[%d],[%d]= ",i,j);
                    scanf("%d",&m[i][j]);               /* code */
            }          
    }

    for (i = 0; i < fila; i++){
            for ( j = 0;  j< columna; j++){
                suma+=m[i][j];                            
            }
    }
p=(float)suma/(float)(fila+columna);
 printf("\n promedio : %f \n ",p);

  a = m[0][0];
    for ( i = 0; i < fila; i++){
            for (j = 0;  j< columna; j++){
                suma+=m[i][j];  
                    if (a < m[i][j]) {
                    a = m[i][j];
                    fx=i;
                    cx=j;
                     }            
            }
         
    }
        printf(" \n --------------------------------\n ");  
    printf(" mayor de la matriz: %d\n  ",a);  
          printf(" \n --------------------------------\n ");  
     printf(" posiscion  del mayor : %d , %d\n  ",fx+1,cx+1);



 
} 
