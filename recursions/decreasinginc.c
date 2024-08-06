#include<stdio.h>

void dec(int x){
    if(x==0) return;
  dec(x-1);
  printf("%d\n",x);
    return;
}
void inc(int x){
    if(x==0) return;
printf("%d\n",x);
  inc(x-1);
    return;
}
int main(){
 int n;
  printf("enter the number");
  scanf("%d",&n);
   
    inc(n);
     dec(n);
    return 0;
}