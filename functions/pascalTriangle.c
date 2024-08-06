#include<stdio.h>
// int factorial(int x){
// int p=1;
//  for(int i=1;i<=x;i++){
//     p=p*i;
//  }
//     return p;
//}
int main(){
    int h;
     printf("enter the height");
      scanf("%d",&h);
     for ( int i=0;i<=h;i++){
      for(int k=0;k<=h-i;k++){
            printf(" ");
            }
        for ( int m=0;m<=i;m++){  
            int ncr=factorial(i)/(factorial(m)*factorial(i-m));
        printf("%d ",ncr);
        }
        printf("\n");
     }

    return 0;
}