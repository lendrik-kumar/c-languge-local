#include<stdio.h>
#include<limits.h>


int main(){
int x,y,i,j,t=INT_MIN,indx=0;
  printf("enter the rows");
  scanf("%d",&x);
  printf("enter the coulmns");
  scanf("%d",&y);
int a[x][y];
for(i=0;i<y;i++){
int sum = 0;
    for(j=0;j<x;j++){
        printf("enter the %d,%d value",i,j);
        scanf("%d",&a[i][j]);
      if(a[i][j]==1 && t < sum){
        indx = i;
      }
    
    }
 printf("\n");
}
printf("maximum number of 1's are in row %d",indx);


return 0;
}