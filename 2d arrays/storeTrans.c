
#include <stdio.h>

int main() {
    int x, y, i, j;

    printf("Enter the rows: ");
    scanf("%d", &x);
    printf("Enter the columns: ");
    scanf("%d", &y);

    int arr[x][y],brr[y][x];

    // Get the matrix input from the user
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Enter the %d,%d value: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
        brr[i][j] = arr[j][i];  
        }
    }
    // Print the transposed matrix
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}  