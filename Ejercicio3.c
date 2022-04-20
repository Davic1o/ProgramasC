#include <stdio.h>
int main(){
int n,m,D=0,cont=0,i,j;
int a[100],b[100],au[200],c[200];

printf("cuantos datos quiere guardar en a[n]: ");
scanf("%d",&n);
  for(i=0;i<n;i++){
          printf("a[%d]: ",i+1);
    scanf("%d%*c",&a[i]);
    }
for (i = 0; i < (n - 1); i++){ 
    for (j = i + 1; j < n; j++){ 
      if (a[j] < a[i]){ 
        D = a[j]; 
        a[j] = a[i]; 
        a[i] = D; 
      } 
    } 
  } 
printf("Cuantos datos quiere guardar en b[m]: ");
scanf("%d",&m);
for(i=0;i<m;i++){
          printf("b[%d]: ",i+1);
    scanf("%d%*c",&b[i]);
    }

D=0;
for (i = 0; i < (m - 1); i++){ 
    for (j = i + 1; j < m; j++){ 
      if (b[j] < b[i]){ 
        D = b[j]; 
        b[j] = b[i]; 
        b[i] = D; 
      } 
    } 
  } 
for (i = 0; i < (n+m); i=i+2){
    au[i]=a[cont];
    cont++;
}

cont=0;
for (i = 1; i < (n+m); i=i+2){
    au[i]=b[cont];
     cont++;
}

D=0;
for (i = 0; i < (m+n - 1); i++) { 
    for (j = i + 1; j < m+n; j++) { 
      if (au[j] <au[i]){ 
        D = au[j]; 
        au[j] = au[i]; 
        au[i] = D; 
      } 
    } 
  } 
for (i = 0; i < (n+m); i++){
    c[i]=au[i];
}

printf("\n vector a \n");
for (i = 0; i < n; i++){

    printf("[%d]",a[i]);
}
printf("\n vector b \n");
for (i = 0; i < m; i++){

    printf("[%d]",b[i]);
}
if(n!=1){
printf("\n vector c \n");
for (i = 0; i < ((n)+(m)); i++){
    printf("[%d]",c[i]);
}	
}
else{
printf("\n vector c \n");
for (i = 1; i < ((n)+(m)); i++){
    printf("[%d]",c[i-1]);
}
    printf("[%d]",b[m-1]);
}

return(0);
}
