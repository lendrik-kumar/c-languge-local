#include<stdio.h>


int main(){
int x,y,i,j;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
int arr[x][y];
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
    }
 printf("\n");
}
for(i=0;j<y;j++){
    for(j=0;j<x;j++){
        printf("%d ",arr[j][i]); 
    }
 printf("\n");
}
return 0;
}