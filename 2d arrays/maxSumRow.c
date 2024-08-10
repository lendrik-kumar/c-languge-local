#include<stdio.h>
#include<limits.h>


int main(){
int x,y,i,j,indx=0;;
int sum;
int t=INT_MIN;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
int arr[x][y];
  for(i=0;i<y;i++){
 int sum=0;
    for(j=0;j<x;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&arr[i][j]);
      sum = sum + arr[i][j];
       if(t<sum){
        t = sum;
        indx = i;
       }
    }
 printf("\n");
   }
 printf("the maximum sum is %d and row is %d",t,indx+1);
    return 0;
}

