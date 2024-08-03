#include<stdio.h>
int main()
{
 int i,n,a;
  printf("enter the number of terms");
  scanf("%d",&a);
  int r=100;
 for(i=2;i<a;i++)
 {
   if(a%i==0)
  
r=1;
 break;
 }
 if(r==100)
 printf("prime");
else
 printf("composite");
    return 0;
}