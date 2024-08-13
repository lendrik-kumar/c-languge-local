#include<stdio.h>
#include<stdbool.h>
int main(){
int x,i,j; 
printf("enter number of elements");
scanf("%d",&x); 
  int arr[x];
 for(int i=0;i<x;i++){
        printf("enter the %d value",i+1);
        scanf("%d",&arr[i]);
 printf("\n");
}

   for(i=0;i<x-1;i++){  
    bool flag = false;               
    for(j=0;j<x-i-1;j++){
        
     if(arr[j]>arr[j+1]){
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
        flag = true;
     }}
     if( flag == false) break; 
   }
   for(i=0;i<x;i++){
printf("%d",arr[i]);
}
   return 0;
}