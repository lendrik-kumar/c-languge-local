#include<stdio.h>
int main()
{
 int a;
 printf("enter the number");
 scanf("%d",&a);
  if(a%5==0 && a%3==0){
    printf("divisible");
         }
   else{
       printf("not divisible");
       }
    return 0;
}