//arrays are use to store large data in single variable

#include<stdio.h>
int main(){
    int x;
// printf("enter the number of terms");
// scanf("%d",&x);
// int a[x];
//  for(int i=0;i<x;i++){
// printf("enter %d value",i+1);
// scanf("%d",&a[i]);
//  }
//  for(int j=0;j<x;j++){
//     printf("%d\n",a[j]);
//  }
//     return 0;
// }
printf("enter the number of terms");
scanf("%d",&x);
int* a=&x;
printf("%p",a);
return 0;
}