#include <stdio.h>
  
int main() {
  
int n[1000];
int t,c,x=0;

scanf("%d",&t);
//a condição para o programa rodar N>=1 && N<=50
if(t>=2 && t<=50){
//sempre que o valor de x == t ele recebe 0 novamente 
  for(c=0;c<1000;c++){
    n[c]=x;
      x++;
      if(x==t){
        x=0;}
  }

//parte final apresenta todos os numeros gerados através do contador acima
for(c=0;c<1000;c++){
    printf("N[%d] = %d\n",c,n[c]);}}
     
  
    return 0;
}
