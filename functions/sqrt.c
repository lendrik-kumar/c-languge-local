#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&y);
  int power=pow(x,y);
  //  int root=sqrt(x);
    printf("%d",power);
    // printf("%d",root);
   return 0; 
}