#include<stdio.h>
int fact(int x){
    int p=1;
    for(int i=1;i<=x;i++){
        p=p*i;
    }
    return p;
}
 int main(){
    int n,r;
  printf("enter the value of n");
  scanf("%d",&n);
  printf("enter the value of r");
  scanf("%d",&r);
    int ncr=fact(n)/(fact(r)*fact(n-r));
    printf("the factorial is %d",ncr);
    return 0;
 }