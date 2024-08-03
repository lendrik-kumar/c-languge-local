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
  if((a+c)>b && (a+b)>c && (b+c)>a){
      printf("possible");//111
} 
   else{
        printf("not possible");
   }    
    return 0;
} 