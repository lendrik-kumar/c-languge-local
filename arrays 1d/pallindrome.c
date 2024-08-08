#include<stdio.h>
void fun(int a[],int x){
   int i = 0;
   int j = x;
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
// if(x%2==0){
//     if(e==x/2) printf("YES");
//     else printf("NO");
// }
// if(x%2!=0) {
//     if(e==(x-1)/2) printf("YES");
//     else printf("NO");   
// }
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
    return 0;
}