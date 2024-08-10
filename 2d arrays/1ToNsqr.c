#include<stdio.h>
int main(){
int x,y,i,j;
     printf("enter the rows");
     scanf("%d",&x);
     printf("enter the coulmns");
     scanf("%d",&y);
int arr[x][y];
  
int sum=1, tne = 1+x*y, minc=0, maxc=y,minr=0,maxr=x;
while(sum<tne){
    for(j = minc;j<maxc && sum <= tne ;j++){
        arr[minr][j]=sum;
        sum++;
    }
    minr++;
    for(j = minr;j<maxr && sum <= tne ;j++){
        arr[j][maxc-1]=sum;
        sum++;
    }
    maxc--;
    for(j = maxc-1;j>=minc && sum <= tne ;j--){
      arr[maxr-1][j]=sum;
        sum++;
    }
    maxr--;
    for(j = maxr-1;j>=minr && sum <= tne ;j--){
      arr[j][minc]=sum;
        sum++;
    }
    minc++;
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("%d ",arr[i][j]);
    }
 printf("\n");
}

    return 0;
}