#include<stdio.h>
int main(){
int x;
printf("enter the number of terms");
scanf("%d",&x);
int a[x];
for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
if(i%2==0) a[i]=a[i]*2;
if(i%2!=0) a[i]=a[i]+10;
}
for(int j=0;j<x;j++){
printf(" %d \n",a[j]);
}
    return 0;
}