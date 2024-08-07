 #include<stdio.h>
// int max(int x){
    
//     return 
// }
int main(){
  int x;
  printf("enter number of terms");
  scanf("%d",&x);
   int a[x],b;//,n;
  // b=-1*n;
    for(int i=0;i<x;i++){
printf("enter the %d term",i+1);
scanf("%d",&a[i]);
    }
b=a[0];
    for(int j=0;j<x;j++){
if(b<a[j]){
    b=a[j];
}
}
    printf("the largest number is %d",b);
    return 0;
}