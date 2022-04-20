#include <stdio.h>

void main()
{
  int edad;

  printf("Verificar si una persona puede sufragar \n");    
  printf("Ingrese su edad: \n");
  scanf("%d",&edad);
  if(edad>=16)
   {
        printf("Usted puede sufragar");
   }
  else
   {
        printf("No tiene la edad para sufragar");
   }

}


