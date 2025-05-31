#include<stdio.h>

int main(){

    int n = 4;
    int *p = &n;

    printf("%d", *(p + 2)); // Accessing

    return 0;
}