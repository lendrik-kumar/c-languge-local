#include<stdio.h>
int main(){
int arr[7]={1,2,3,3,4,5,6,7};
 for(int i=0;i<=7;i++){
    for(int k=i+1;k<=7;k++){
        if(arr[i]==arr[k]){ printf("%d is the repeating element at index %d &%d",arr[i],i,k);
        break;
        }
    }
 }
    return 0;
}