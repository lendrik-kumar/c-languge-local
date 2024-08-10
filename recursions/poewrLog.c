#include<stdio.h>
#include<math.h>
int power(int x,int y) {
    if(y == 0) return 1;
    if(y == 1) return x;
if(y%2==0) {
    return power(x,y/2)*power(x,y/2);
}
if(y%2!=0) {
    y = y - 1;
    return x*power(x,y/2)*power(x,y/2);
}
return 0;
}
int main()
{
 int a , b ;
  printf("enter the base");
  scanf("%d",&a);
  printf("enter power");
  scanf("%d",&b);
   int ans = power(a,b);
    printf("%d",ans);
    return 0;
}