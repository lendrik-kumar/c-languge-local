#include<stdio.h>
int main(){
  int i,j,l;
  printf("enter the height");
  scanf("%d",&l);
    for(i=1;i<=l;i++){
      for(j=1;j<=l-i+1;j++){
        printf("*");
      }
      printf("\n");
    }
   
    return 0;
}