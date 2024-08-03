#include<stdio.h>
int main(){
  int i,j,l;
  printf("enter the side");
  scanf("%d",&l);
    for(i=1;i<=l;i++){
      for(j=1;j<=l;j++){
        printf("%d",j);
      }
      printf("\n");
    }
   
    return 0;
}