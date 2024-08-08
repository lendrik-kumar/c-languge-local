#include<stdio.h>
int main(){
int arr[7]={12,3,4,5,67,7,8};
int x;
printf("enter the number to search");
scanf("%d",&x);
  for(int i=0;i<7;i++){
    if (arr[i]==x){
        printf("%d is the present in the array and its index is %d",x,i);
        break;
    }
  }
    return 0;
}