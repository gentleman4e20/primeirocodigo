#include <stdio.h>
  
int main() {
  
   int n[1000];
    int t,x,c;
x=0;
 
scanf("%d",&t);
 
if(t>=2 && t<=50){

for(c=0;c<1000;c++){
  n[c]=x;
    x++;
  if(x==t){
  x=0;}}
 
for(c=0;c<1000;c++){
    printf("N[%d] = %d\n",c,n[c]);}}
     
  
    return 0;
}
