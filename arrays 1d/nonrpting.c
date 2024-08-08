#include<stdio.h>
#include<stdbool.h>
int main(){
int arr[7]={1,2,3,4,3,2,1};
 for(int i=0;i<=6;i++){
bool flag = false;
    for(int k=i+1;k<=6;k++){
        if(arr[i]==arr[k]){ 
        flag = true;
        }
    }
    if(flag == false){
        printf("%d is unique\n",arr[i]);
        break;
    }
 }
    return 0;
}