#include<stdio.h>
int main(){
int x;
 printf("enter the number of terms");
 scanf("%d",&x);
int r;
printf("entr rota.");
scanf("%d",&r);
int a[x];
for(int i=0;i<x;i++){
printf("enter %d value",i+1);
scanf("%d",&a[i]);
 }
if(r%2!=0){
    for (int j = x-1;j>=0;j--){
printf("%d\n",a[j]);
}
}
else{
   for (int e=0;e<x;e++){
printf("%d\n",a[e]);
}
}
    return 0;
}