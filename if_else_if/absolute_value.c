#include<stdio.h>
int main()
{
 int a;
 printf("ennter the value");
 scanf("%d",&a);
 
  if(a<0){
    a=a*(-1);
    printf("%d",a);
  }
   else{
       printf("%d",a);
       }
    return 0;
}
