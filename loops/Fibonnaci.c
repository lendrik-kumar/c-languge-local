#include<stdio.h>
int main(){
int i,a,sum=0,x,y;
  printf("enter the number of terms");
  scanf("%d",&a);
  x=1;
  y=1;
  printf("%d\n%d\n",x,y);
   for(i=1;i<=a-2;i++){
    sum=x+y;
    x=y;
    y=sum;
printf("%d\n",sum);
   }
    return 0;
}
