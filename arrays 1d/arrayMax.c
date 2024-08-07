 #include<stdio.h>
 #include<limits.h>
// int max(int x){
    
//     return 
// }
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
 } }
// b=a[0];
//     for(int j=0;j<x;j++){
// if(b<a[j]){
//     b=a[j];
// }
// }
    printf("the largest number is %d",b);
    return 0;
}
//int min is the smallest number possible to store in int data type which is -2^32 