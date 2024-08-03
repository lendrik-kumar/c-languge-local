//use only in small codes
//can be used in larger but gets complicated

#include<stdio.h>
int main()
{
int c;
printf("enter");
scanf("%d",&c);
//ternary
  c%2==0 ? printf("even") : printf("odd") ;
    return 0;
}