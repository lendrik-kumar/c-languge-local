/*
 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int min_distance = i < j ? i : j;
            min_distance = min_distance < ((2 * (n - 1)) - 1 - i) ? min_distance : (2 * n - 1 - 1 - i);
            min_distance = min_distance < ((2 * (n - 1)) - 1 - j) ? min_distance : (2 * n - 1 - 1 - j);
            
            int x = n - min_distance;

            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}
