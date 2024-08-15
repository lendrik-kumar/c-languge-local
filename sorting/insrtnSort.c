#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main(){

int x;//,i,j; 

    printf("enter number of elements");
    scanf("%d",&x);

int arr[x];

    for(int i=0;i<x;i++){
        printf("enter the %d value",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
      }

    for(i=0;i<x;i++){            
     j=i;  
      while(arr[j]<arr[j-1] && j>=1){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
      } }

    for(i=0;i<x;i++){
       printf("%d",arr[i]);
      }
   return 0;
}
//incomplete