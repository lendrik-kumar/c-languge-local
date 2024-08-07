#include<stdio.h>
int main()
{
int x,sum=1;
printf("enter a number");
scanf("%d",&x);
 int a[x];
   for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 sum=sum*a[i];
   }  
   printf("%d is the sum",sum);
    return 0;
}