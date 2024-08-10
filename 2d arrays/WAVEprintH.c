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
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
         if(i%2==0)   printf("%d ", arr[i][j]);
         else printf("%d ",arr[i][x-j-1]);
        }
    }

    return 0;
}