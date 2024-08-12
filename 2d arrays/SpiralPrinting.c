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
int sum=0, tne = x*y, minc=0, maxc=y,minr=0,maxr=x;
while(sum<tne){
    for(j = minc;j<maxc && sum < tne ;j++){
        printf("%d ",arr[minr][j]);
        sum++;
    }
    minr++;
    for(j = minr;j<maxr && sum < tne ;j++){
        printf("%d ",arr[j][maxc-1]);
        sum++;
    }
    maxc--;
    for(j = maxc-1;j>=minc && sum < tne ;j--){
        printf("%d ",arr[maxr-1][j]);
        sum++;
    }
    maxr--;
    for(j = maxr-1;j>=minr && sum < tne ;j--){
        printf("%d ",arr[j][minc]);
        sum++;
    }
    minc++;
}

    return 0;
}
