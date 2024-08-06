#include<stdio.h>// pointers(int*) are used to store the address
int main(){
int w=6;
int* x;
x=&w;
  printf("%p\n",x);
  printf("%p",&x);//%p prints the address of the variable
    return 0;
}