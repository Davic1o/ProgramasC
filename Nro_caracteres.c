#include <stdio.h>

int main(){
    int num, i; 
	float fact;
  printf("Factorial de un numero");
    printf("Ingrese el numero: ");
    scanf("%d",&num);
    fact = 1; 
 for(i=1;i<=num;i++){              
        fact = fact*i; 
 
 }   
    printf("Factorial: %.2f",fact);
 
return 0;   
}
