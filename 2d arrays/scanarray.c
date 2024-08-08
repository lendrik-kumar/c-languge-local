// for(int i=0;i<x;i++){
//     for(int j=0;j<y;j++){
//         printf("enter the %d,%d value",i,j);
//         scanf("%d",&arr[i][j]);
//     }
//  printf("\n");
// }




// for(int m=0;m<x;m++){
//     for(int k=0;k<y;k++){
//         printf(" the %d,%d value is %d",i,j,arr[i][j]);
        
//     }
//  printf("\n");
// }







// #include<stdio.h>
// int main(){
// int x,y,i,j,m,k;
//   printf("enter the rows");
//   scanf("%d",&x);
//   printf("enter the coulmns");
//   scanf("%d",&y);
// int arr[x][y];
// for(i=0;i<y;i++){
//     for(j=0;j<x;j++){
//         printf("enter the %d,%d value",i,j);
//         scanf("%d",&arr[i][j]);
//     }
//  printf("\n");
// }
// for(m=0;m<x;m++){
//     for(k=0;k<y;k++){
//         printf("%d ",arr[m][k]);
   
//     }
//  printf("\n");
// }
//     return 0;
// }
#include <stdio.h>

int main() {
    int x, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &x);
    int arr[x][x], ary[x][x], ans[x][x];
    printf("Enter values for the first matrix:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter values for the second matrix:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &ary[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            ans[i][j] = arr[i][j] + ary[i][j];
        }
    }
    printf("Result:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}