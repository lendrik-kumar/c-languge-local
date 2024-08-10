 #include<stdio.h>
 #include<limits.h>
int main(){
  int x;
  printf("enter number of terms");
  scanf("%d",&x);
   int a[x],b;
   b=INT_MIN;
    for(int i=0;i<x;i++){
printf("enter the %d term",i+1);
scanf("%d",&a[i]);
if(b<a[i]){
    b=a[i];
 }}
   int c;
    return 0;
} 