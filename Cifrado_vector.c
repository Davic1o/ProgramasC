#include <stdio.h>
#include <stdlib.h>

 
void lecturaVector(int vectorClaro[],int dim);
        
void cifradoVector(int vectorClaro[], int vectorCifrado[] , int dim, int clave);
        
void impresionVector(int vectorCifrado[] ,int dim);

int main()
{
  int dim=10, clave,vectorClaro[dim],vectorCifrado[dim];
    printf("Cifrado de datos!\n");
    printf("Ingrese la dimension: ");
    scanf("%d",&dim);
   if(dim<=10){
        printf("ingrese la clave: ");
        scanf("%d",&clave);
        printf("Ingrese los elementos del vector en texto claro\n");
        lecturaVector(vectorClaro,dim);
        printf("\nVector cifrado:\n");
        cifradoVector(vectorClaro, vectorCifrado, dim, clave);
        impresionVector(vectorCifrado, dim);
   }
    else{
        printf("\nnumero invalido!");
    }
    return 0;
}


void lecturaVector(int vectorClaro[] ,int dim){
    int i;
    for(i=0;i<dim;i++){
    printf("Claro[%d]: ",i);
    scanf("%d",&vectorClaro[i]);
    
    } 
 }
        
void cifradoVector(int vectorClaro[], int vectorCifrado[] , int dim, int clave){
        int i,final,VC;
        final=clave-dim;
        final=dim-1;
    
    for(i=0;i<dim;i++){
        
        if((i+clave)<dim){
        
        vectorCifrado[i+clave]=vectorClaro[i];
        }else{
            VC=clave-dim;
            
        vectorCifrado[i+VC]=vectorClaro[i];
            
        }
    
    }
    vectorCifrado[0]=vectorClaro[final];
        
}


        
void impresionVector(int vectorCifrado[],int dim){
    int i=0,final;
    
    
    for(i=0;i<dim;i++){
    printf("cifrado[%d]: %d\n",i,vectorCifrado[i]);
    }
    
}

