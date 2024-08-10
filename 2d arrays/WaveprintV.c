#include <stdio.h>

int main() {
    int x, y, i, j;

    printf("Enter the rows: ");
    scanf("%d", &x);
    printf("Enter the columns: ");
    scanf("%d", &y);

    int arr[x][y];

    // Get the matrix input from the user
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Enter the %d,%d value: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
for(j=0;j<y;j++){
    if(j%2==0){
    for(i=0;i<x;i++){
        printf("%d  ",arr[i][j]);
        }}
    else{
    for(i=x-1;i>=0;i--){
        printf("%d  ",arr[i][j]);
        }}
}
    return 0;
}