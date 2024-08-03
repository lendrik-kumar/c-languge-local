#include<stdio.h>
int main(){
int i,a,b=1;
  printf("enter the number");
  scanf("%d",&a);
  
   for(i=1;i<=a;i++){
    b=b*i;
   }
   printf("%d",b);
    return 0;
}
