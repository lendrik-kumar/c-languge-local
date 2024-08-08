#include<stdio.h>
void reverse(int arr[],int x,int k){
  for(int i=x,j=k;i<j;i++,j--){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
return;
}
int main(){
int k;
printf("enter the rotations");
scanf("%d",&k);
int x;
printf("enter the number of terms");
scanf("%d",&x);
int arr[x],i;
for(i=0;i<x;i++){
    printf("enter the %d term",i+1);
    scanf("%d",&arr[i]);
}
k=k%x;
reverse(arr,0,x-1);
reverse(arr,0,1);
reverse(arr,k,x-1);
for(int p=0;p<x;p++){
printf("%d ",arr[p]);
}
    return 0;
}