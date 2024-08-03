#include<stdio.h>
int main(){
  int i,j,l;
  printf("enter the height");
  scanf("%d",&l);
    for(i=1;i<=l;i++){
        int a=1;
      for(j=1;j<=i;j++){
        printf("%d ",a);
      a=a+2;
      }
      printf("\n");
    }
   
    return 0;
}