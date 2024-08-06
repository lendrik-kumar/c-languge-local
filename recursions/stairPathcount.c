#include<stdio.h>
int counter(int a){
if(a==1) return 1;
if(a==2) return 2;
if(a==3) return 4;
    return counter(a-1)+counter(a-2)+counter(a-3);
}
int main(){
    int m;
     printf("enter the stair number");
     scanf("%d",&m);
      printf("%d",counter(m));

    return 0;
}