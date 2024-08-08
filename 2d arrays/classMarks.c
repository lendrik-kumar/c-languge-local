#include<stdio.h>
int main(){
int x,y,i,j,m,k;
  printf("enter the subjects");
  scanf("%d",&y);
  printf("enter the number of students");
  scanf("%d",&x);
int arr[x][y];
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        if(j==0){
        printf("enter the roll number %d",i);
        scanf("%d",&arr[i][j]);
        }
        else{
            printf("enter the marks");
            scanf("%d",&arr[i][j]);
        }}
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