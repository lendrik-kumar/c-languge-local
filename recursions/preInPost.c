#include<stdio.h>
void PreInPost(int n){
if(n==0) return;
 printf("pre %d \n",n);
 PreInPost(n-1);
 printf("in %d\n",n);
 PreInPost(n-1);
 printf("post %d\n",n);
    return ;
}

int main(){
int n=2;
 PreInPost(n);
    return 0;
}