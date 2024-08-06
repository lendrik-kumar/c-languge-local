#include<stdio.h>
int main(){
    int x;
    printf("neter the number");
    scanf("%d",&x);
int a[x];
for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
}
for (int j = x-1;j>=0;j--){
printf("%d\n",a[j]);

}
    return 0;
}