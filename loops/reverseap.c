#include<stdio.h>
int main()
{
 int i,n,a;
 n=100;
  printf("enter the number of terms");
  scanf("%d",&a);
 for(i=1;n>0;i++)
 {
   printf("%d\n",n);
 n=n-3;
 }

    return 0;
}
//maximum value of n is 33