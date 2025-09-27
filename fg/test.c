#include<stdio.h>

int main(){
int n[5] = {1, 2, 3, 4, 5};
int* p ;
p= n;

// printf("Value of n: %d\n", n);
for (int i = 0; i < 5; i++)
{
    printf("Address of n: %u\n", p[i]);
    printf("Value of n: %d\n", p);
    /* code */
}

printf("Address of n: %p\n", *&p);
// printf("Address of n: %p\n", (void*)&n);

p++;

// printf("Value of n: %d\n", n);
// printf("Value of n: %d\n", *p);
// printf("Address of n: %p\n", p);
// printf("Address of n: %p\n", *&p);
// // printf("Address of n: %p\n", (void*)&n);

// int arr[5] = {1, 2, 3, 4, 25};

// int *i,*j;

// i = &arr[0];
// j = &arr[4];

// printf("Value of i: %u\n", i);
// printf("Value of j: %u\n", j);

// printf("Address of i: %ld\n", i-j);

// printf("Address of j: %d\n", *j-*i);
    
    return 0;
}