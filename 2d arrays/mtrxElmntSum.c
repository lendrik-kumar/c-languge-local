#include<stdio.h>
int main(){
int x,y,i,j,sum=0;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
int arr[x][y];
 for(i=0;i<y;i++){
    for(j=0;j<x;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
    sum = sum + arr[i][j];
    }
 printf("\n");
 }
 printf("%d ",sum);
    return 0;
}
