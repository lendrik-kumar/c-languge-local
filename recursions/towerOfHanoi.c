//min number of moves (2^n)-1
#include<stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,h,s,d);
    printf("%c --> %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
int n;
 printf("enter the value");
 scanf("%d",&n);

 tower(n,'A','B','C');
    return 0;
}