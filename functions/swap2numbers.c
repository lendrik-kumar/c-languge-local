#include<stdio.h>
int main(){
    int c,a,b;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
  c=b;
  b=a;
  a=c;
  printf("after swapping a=%d,b=%d",a,b);
    return 0;
}