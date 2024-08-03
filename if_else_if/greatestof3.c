#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the 1st no.");
 scanf("%d",&a);
 printf("enter the 2nd no.");
 scanf("%d",&b);
 printf("enter the 3rd number");
 scanf("%d",&c);
  if(a>b){
    printf("1st is largest");
         } 
   else if(b>c){
       printf("2nd is largest");
       }
   else{
    printf("3rd is largest");
   }    
    return 0;
} 
//can be done using && in if condition 