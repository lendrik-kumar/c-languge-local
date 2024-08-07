//arrays are passed by refference(with address) unlike integers
#include<stdio.h>
void fun(int x[]){
int temp = x[0];
x[0] = x[1];
x[1] = temp;
    return;
}
int main(){
  int x[1];
  x[0] =1,x[1]=2;
  printf("%d %d \n",x[0],x[1]);
  fun(x);
  printf("%d %d \n",x[0],x[1]);
    return 0;
}