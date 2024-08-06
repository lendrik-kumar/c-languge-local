#include<stdio.h>
void sum(int a,int b){
  if(a==0){ 
    printf("%d",b);
    return;
    }
  sum(a-1,b+a);
    return;
}

int main(){
int x;
printf("enter the number");
scanf("%d",&x);
  sum(x,0);
    return 0;
}