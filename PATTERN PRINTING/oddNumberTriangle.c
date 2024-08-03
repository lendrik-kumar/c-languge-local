#include<stdio.h>
int main(){
  int i,j,l;
  printf("enter the height");
  scanf("%d",&l);
    for(i=1;i<=l-(l/2);i++){
      for(j=1;j<=i;j++){
        if(j%2!=0){
        printf("%d",j);}
      }
      printf("\n");
    }
   
    return 0;
}