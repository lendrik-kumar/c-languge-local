#include<stdio.h>
int main(){
    int x,i=0,j=4;
    printf("enter the target sum");
    scanf("%d",&x);
  int arr[5] = {1,2,4,11,12};
//    for(int i=0;i<5;i++){
//     int sum = 0;                   //time complexity
//       for(int j=i+1;j<5;j++){
//           if(arr[i]+arr[j] == x) {
//             printf("the indices are %d & %d",i,j);
     
//       }}
//    }
for(int k=0 ; k < 5 ;k++){
  if(arr[i]+arr[j] == x) {
    printf("%d & %d are the indices",i,j);
  break;
  }
  if(arr[i]+arr[j] > x) j--;
  if(arr[i]+arr[j] < x) i++; 
   } 
   return 0;
}