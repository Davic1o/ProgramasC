#include<stdio.h>
#include <ctype.h>
# include<string.h>
#define max 50

int repetir(char pa[],char letra);
int norepetir(char v[],char sin[]);
void encuentraVocales(char f[],char v[]);

int main(){
int final=0;
    char frase[max];
    char vocales[max];
    char sinv[4];
    printf("Vocales en una frase");
    printf("\nFrase: ");
    fgets(frase,max,stdin);
    encuentraVocales(frase,vocales);
    final=norepetir(vocales,sinv);

if (final==1)
  printf("\nVocales:%s  ",sinv);
else
    printf("NO");
   
return 0;    
}
int repetir(char palabra[],char letra){
int n=0;
    for (int i = 0; i < strlen(palabra); i++)
    {
        if(letra==palabra[i])
        n++;
    }
    if (n>0)
    return 1;
return 0;
}

int  norepetir (char l[],char sin[]){
int n=0;
char vocales []="aeiou";
for (int i = 0; i <strlen(vocales) ; i++) 
    {
          if (repetir(l,vocales[i])>0)
          {
            sin[n]=vocales[i];
            n++;  
        }
    }
     sin[n+1]='\0';
     if(n==0)
     return 0;
return 1; 
}
void encuentraVocales(char V[],char S[]){
int i=0,n=0;
do
{
    if(V[i]=='a'||V[i]=='e' ||V[i]=='i'||V[i]=='o'||V[i]=='u'
    ||V[i]=='A'||V[i]=='E'||V[i]=='I'||V[i]=='O'||V[i]=='U' ){
        S[n]=tolower(V[i]); 
            n++;
    }
   i++;
} while (V[i]!='\0');
    
    S[n+1]='\0';
}



