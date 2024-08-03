#include<stdio.h>
int main()
{
int i,n,a,x=0;
 printf("enter the number");
 scanf("%d",&a);
  for(i=1;a>0;i++)
  {
//if((a%10)%2==0){
    n=a%10;
    a=a/10;
x=n+x;//}
//a=a/10;

  }
  printf("%d",x);
    return 0;
}