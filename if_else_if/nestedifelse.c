#include<stdio.h>
int main(){
int a;
printf("enter the value");
scanf("%d",&a);
 if(a%5==0){
    if(a%3==0){
        printf("yes");
    }
    else{
        printf("no");
    }
 }
 else{
    printf("no");
 }
    return 0;
}