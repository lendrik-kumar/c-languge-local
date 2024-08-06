/*#include<stdio.h>
void inc(int a,int b){
    if(a>b) return;
    printf("%d\n",a);
     inc(a+1,b);
    return;
    //parameter way
}
int main(){
int x;
 printf("enter the value");
 scanf("%d",&x);
   inc(1,x);
    return 0;
}*/
#include<stdio.h>
void factorial (int n){
   if(n==0) return;
    factorial(n-1);
   printf("%d\n",n);
    return ;
}
int main(){
int n;
 printf("enter the number");
 scanf("%d",&n);
factorial(n);
    return 0;
}