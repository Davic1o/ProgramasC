#include<stdio.h> 

int verificarEntero(int);      
void numeroPerfecto(int);

int main()
{
    int numero;
    printf("PROGRAMA PARA VERIFICAR NUMERO PERFECTO");
	do {
	printf("\nIngrese numero entero: ");
	    scanf("%d",&numero);
    if(verificarEntero(numero)==1){                                                                                           // si el numero es entero positivo
numeroPerfecto(numero);
}

    else                                 

    {

        printf("El numero ingresado no es un entero positivo vuelva a ingresar otro valor");
		}

    }while(verificarEntero(numero)==0);
	return 0;
	}
int  verificarEntero(int a)
{
    if(a>=0){
return 1;
}

    else

    {

       return 0;                                                                     
                                                                                
    }
}
void numeroPerfecto(int a){
    int i,suma=0;                                                               
    for(i=1;i<a;i++){
        if(a%i==0){
          suma=suma+i;
        }
    }
    if(suma==a){
       printf("El numero %d es un numero perfecto",a);  
    }
    else{
  printf("El numero %d NO es un numero perfecto",a);
    }
}
