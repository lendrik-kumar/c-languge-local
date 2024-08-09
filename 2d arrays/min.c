
#include<stdio.h>
#include<limits.h>

int main(){
    int x,y,i,j;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
  int t;
  int iny;
   int inx;
  t=INT_MAX;
    int arr[x][y];
    for(i=0;i<y;i++){
      for(j=0;j<x;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
        if(arr[i][j]<t){
          t=arr[i][j];
        inx=i;
        iny=j;
       }}
      printf("\n");
   }
printf("%d is MINIMUM\nits index is %d,%d",t,inx,iny);
    return 0;
}