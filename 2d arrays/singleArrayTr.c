
#include <stdio.h>

int main() {
    int x, y, i, j;

    printf("Enter the rows: ");
    scanf("%d", &x);
   y=x;

    int a[x][y];
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Enter the %d,%d value: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < x; i++) {
        for (j = i; j < y ; j++) {
          if(j==i) continue;
          else{
            a[i][j] = a[i][j] + a[j][i];
            a[j][i] = a[i][j] - a[j][i];
            a[i][j] = a[i][j] - a[j][i];
          }
        }}
 
    // Print the transposed matrix
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}  