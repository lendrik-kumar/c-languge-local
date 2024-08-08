#include<stdio.h>
int main(){
int x,y,i,j,m,k;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
int arr[x][y];
for(i=0;i<y;i++){
    for(j=0;j<x;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
    }
 printf("\n");
}
for(m=0;m<x;m++){
    for(k=0;k<y;k++){
        printf("%d ",arr[m][k]);
   
    }
 printf("\n");
}
    return 0;
}