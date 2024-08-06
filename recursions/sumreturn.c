#include<stdio.h>
int w(int x){
if(x==1 || x==0) return 1;
    return x+w(x-1);
}
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
  int sum = w(n);
   printf("%d",sum);
  return 0;
}