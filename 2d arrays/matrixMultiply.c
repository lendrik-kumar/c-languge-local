#include <stdio.h>

int main() {
    int x, y, i, j, k, m;
    printf("Enter the number of rows 1st matrix: ");
    scanf("%d", &x);
    printf("Enter the number of coulmns of 1st matrix: ");
    scanf("%d", &y);
    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d", &k);
    printf("Enter the number of coulmns of 2nd matrix: ");
    scanf("%d", &m);
    if(y==k){
    int arr[x][y], ary[k][m], ans[x][m];
    
    printf("Enter values for the first matrix:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter values for the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &ary[i][j]);
        }
        printf("\n");
    }
    int cr = y;
    for (i = 0; i < x; i++) {
        for (j = 0; j < m; j++) {
          ans[i][j] = 0;
            for(int o=0; o < cr ;o++){
                ans[i][j] = ans[i][j] + arr[i][o] * ary[o][j];
            }
        }
    }
    printf("Result:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }}
    return 0;
}