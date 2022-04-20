#include<stdio.h>
#include <ctype.h>
# include<string.h>
#define MAX 50
void Letra1(char f[]);

int main(){
   char frase[MAX];
    printf("Conversion de primera letra");
    printf("\nFrase original: ");
     fgets(frase,MAX,stdin);
    Letra1(frase);
    printf("Frase convertida: %s",frase);
    return 0;
}

void Letra1(char f[]){
    int n=0;
do{
if ((int)f[n]==32){
    f[n+1]=toupper(f[n+1]); 
    }else if (n==0){
    f[n]=toupper(f[n]);
}
 n++;
} while (f[n]!='\0');
    
}
