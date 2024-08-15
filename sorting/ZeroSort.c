#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main(){

int x,i,j,minx = -1; 

    printf("enter number of elements");
    scanf("%d",&x);

int arr[x];

  for(int i=0;i<x;i++){
        printf("enter the %d value",i+1);
        scanf("%d",&arr[i]);
     printf("\n");
      }

int idx = 0;

  for(i=0;i<x;i++){ 
        for(j=i;j<x;j++){   
             if(min > arr[j]) {
             minx = j;
             min = arr[j];
        } }
        
      int temp = arr[minx];
      arr[minx] = arr[i];
      arr[i] = temp;
     }

  for(i=0;i<x;i++){
       printf("%d",arr[i]);
    }
   return 0;
}