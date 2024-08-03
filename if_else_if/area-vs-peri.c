#include<stdio.h>
int main()
{
 int a,b,c,d;
 printf("ennter the length");
 scanf("%d",&a);
 printf("enter the breadth");
 scanf("%d",&b);
c=2*(a+b);
d=a*b;
  if(c<d){
    printf("area is greater than perimeter");
         }
   else{
       printf("area is smaller than perimeter");
       }
    return 0;
}