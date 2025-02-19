#include<stdio.h>

int main(){

int a = 25;
int ans,i = 0;

for(i = 0 ; i <= a/2 ; i++){
    if(i*i == a){
        ans = i;
    }
}

printf("%d",ans);

    return 0;
}