#include<stdio.h>
int main()
{
 int a;
 printf("enter the number");
 scanf("%d",&a);
  if((a%5==0 || a%3==0) && a%15!=0){
    printf("div by 5 or 3 but not by 15");
         }
   else if((a%5==0 || a%3==0) && a%15==0){
       printf("div by 5 or 3 and 15");
       }  
    else{
        printf("nor by 5,3,15");
    }    
    return 0;
}
//hyrarky of && is greater thats why brackets