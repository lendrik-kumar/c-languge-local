#include<stdio.h>
int main(){
int x,y,i,j,l1,l2,r1,r2,sum=0;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
  printf("enter the l1");
  scanf("%d",&l1);
  printf("enter the r1");
  scanf("%d",&r1);
  printf("enter the l2");
  scanf("%d",&l2);
  printf("enter the r2");
  scanf("%d",&r2);

int arr[x][y];
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
    }
 printf("\n");
}
 for(i=l1;i<=l2;i++){
    for(j=r1;j<=r2;j++){
    sum = sum + arr[i][j];
    }
 }
 printf("%d ",sum);
    return 0;
}