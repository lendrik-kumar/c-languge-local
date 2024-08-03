#include<stdio.h>
int main()
{
  int n,i,x=0;
  printf("enter the number of terms");
  scanf("%d",&n);
   for(i=1;i<=n;i++){
    if(i%2==0)
    x=x-i;
    else
    x=x+i;
   }
   printf("%d",x);
    return 0;
}