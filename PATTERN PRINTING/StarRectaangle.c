#include<stdio.h>
int main(){
  int i,j,l,b;
  printf("enter the length");
  scanf("%d",&l);
  printf("enter the breadth");
  scanf("%d",&b);
    for(i=1;i<=b;i++){
      for(j=1;j<=l;j++){
        printf("*");
      }
      printf("\n");
    }
   
    return 0;
}