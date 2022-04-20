#include <stdio.h>
int main(){
    
   char l1, l2, l3, l4;
   int  n, D1,D2,D3,D4;
   printf("Desplazamiento de letras: \n");
   printf("Ingrese letra 1:" );
   scanf("%c%*c",&l1);
   printf("Ingrese letra 2: ");
   scanf("%c%*c",&l2);
   printf("Ingrese letra 3: ");
   scanf("%c%*c",&l3);
   printf("Ingrese letra 4: ");
   scanf("%c%*c",&l4);
   printf("Ingrese n: ");
   scanf("%d%*c",&n);
 D1=l1+n;
 D2=l2+n;
 D3=l3+n;
 D4=l4+n;
 printf("Desplazada: %c %c %c %c:",D1,D2,D3,D4 );
    return 0;
}
