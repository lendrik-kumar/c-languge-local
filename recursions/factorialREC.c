#include<stdio.h>
#include<math.h>
int factorial(int a){
    if(a==1) return 1;
    return a*factorial(a-1);
}
int main(){
int n;
 printf("enter the number");
 scanf("%d",&n);
   int fact=factorial(n);
   printf("%d",fact);
    return 0;
}