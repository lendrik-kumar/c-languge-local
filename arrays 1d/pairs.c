#include<stdio.h>
int main(){
 int g;
printf("enter the SUM");
scanf("%d",&g);
 int x;
printf("enter the number of terms");
scanf("%d",&x);
int a[x];
int b=0;
 for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 }
 for(int j=0;j<x;j++){
    for(int k=0;x>k>j;k++){
        if(g==a[j]+a[k] && k!=j){
            b++;
            printf("PAIRS ARE (%d,%d)\n",a[j],a[k]);
            printf("TERM NUMBERS OF PAIRS ARE (%d,%d)\n",j+1,k+1);
        }}}
printf("NUMBER OF PAIRS :%d",b);
    return 0;
}