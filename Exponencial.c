#include <stdio.h>

int main(){
float x,n=0,i;
float E=1,Euler, pot=1,fact=1;
    scanf("%f %f",&x,&n);
    
        for(i=1;i<=n;i++){
        pot=pot*x;
        fact=fact*i;
      E=E+((pot)/(fact));
      
    }
    
    Euler=E;
        printf("%.5f",Euler);

    return 0;
}
