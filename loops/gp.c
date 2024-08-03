#include<stdio.h>
int main()
{
 int i,n,a;
 n=1;
  printf("enter the number of terms");
  scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
   printf("%d\n",n);
 n=n*2;
 }
    return 0;
}