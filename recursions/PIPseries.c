#include<stdio.h>
void PreInPost(int i){
if(i==0) return;
printf("%d",i);
PreInPost(i-1);
printf("%d",i);
PreInPost(i-1);
printf("%d",i);
    return ;
}
int main(){
int n;
printf("enter the number");
scanf("%d",&n);
  PreInPost(n);
    return 0;
}