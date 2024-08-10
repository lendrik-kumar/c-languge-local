#include<stdio.h>
void fun(int a[],int x){
   int i = 0;
   int j = x;                //inclomplete
   int e = 0;
while(i<j){
if(a[i]!=a[j]){
printf("NO");
    break;
}
if(a[i]==a[j]) printf("yes");
    i++;
    j--;
}
  return;                  //inclomplete
}
int main(){
int x;
printf("enter the number of terms");
scanf("%d",&x);
int a[x];
 for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 }                          //inclomplete
   fun(a,x);
    return 0;
}
