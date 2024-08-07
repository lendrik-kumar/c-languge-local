#include<stdio.h>
void fun(int a[],int x){
   int i = 0;
   int j = x;
while(i<j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
}
  return;
}
int main(){
int x;
printf("enter the number of terms");
scanf("%d",&x);
int a[x];
 for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 }
   fun(a,x);
for(int p=1;p<=x;p++){
printf(" %d \n",a[p]);
 }
    return 0;
}