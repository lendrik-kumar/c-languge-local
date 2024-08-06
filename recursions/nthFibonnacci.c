#include<stdio.h>
int fibbo(int y){
    if(y==1 || y==2) return 1;
    return fibbo(y-1)+fibbo(y-2);
}

int main(){
 int a;
  printf("enter number");
  scanf("%d",&a);
  printf("%d ",fibbo(a));
    return 0;
}