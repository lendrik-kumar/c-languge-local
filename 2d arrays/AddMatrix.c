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