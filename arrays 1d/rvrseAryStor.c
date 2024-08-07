#include<stdio.h>
int main(){
    int x;
printf("enter the number of terms");
scanf("%d",&x);
int a[x];
 for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 }
int b[x];
int m=0;
 for(int j=x-1;j>=0;j--){
b[m]=a[j];
m++;
 }
for(int p=0;p<x;p++){
printf(" %d \n",b[p]);
 }
    return 0;
}