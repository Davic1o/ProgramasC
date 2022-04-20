#include <stdio.h>

long factorial(int x);
int main(){

int m,n;
long facM, facN, facNM, comb;
printf("Numero Conbinatorio\n");
    do{
    printf("ingrese enteros separados por espacio (m>n>0)");
    scanf("%d %d",&m, &n);
    }while(!(m>n && n>0));
       facM = factorial(m);
       facN = factorial(n);
       facNM = factorial(m-n);
       comb = facM/(facN*facNM);
        printf("El numero conbinatorio es: %ld",comb);


    
    return 0;
 

}      
long factorial(int x){
    int i;
    long fac=1;
    if (x == 0){
        return 1;
    }else{    
        for(i=1; i<=x;i++){
            fac  = fac*i;
        }
        return fac;
    }

         
}  
