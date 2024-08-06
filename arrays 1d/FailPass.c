#include<stdio.h>
int main(){
int x;
// printf("enter number of students");
// scanf("%d ",&x);
 int a[10];
  for(int i=0;i<10;i++){
printf("enter marks of %d",i+1);
scanf("%d",&a[i]);
 if(a[i]<35){
    printf("%d\n",i);
 }
}
 return 0;
}