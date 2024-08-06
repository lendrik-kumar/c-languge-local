#include<stdio.h>
int w(int x,int y){
// int n = 1;
//  for(int i = 1;i <= y;i++){
//      n = n * x;
//  }
//     return n;
if(y == 0) return 1;
  return x * w(x,y-1);
}

int main(){
 int a,b;
  printf("enter base");
  scanf("%d",&a);
  printf("enter power");
  scanf("%d",&b);
  int ans = w(a,b);
  printf("%d",ans);
    return 0;
}