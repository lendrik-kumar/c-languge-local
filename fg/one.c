#include <stdio.h>
/*int main() {
    printf("hello world");
    return 0;
}*/
/*int main() {
    int choice;
    printf("enter the choice u want");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("the month is jan\n");
            break;
        case 2:
            printf("the month is feb\n");
            break;

        case 3:
            printf("the month is mar\n");
            break;

        case 4:
            printf("the month is apr\n");
            break;

        case 5:
            printf("the month is may\n");
            break;

        case 6:
            printf("the month is jun\n");
            break;
        case 7:
            printf("the month is jul\n");
            break;

        case 8:
            printf("the month is aug\n");
            break;

        case 9:
            printf("the month is sep\n");
            break;

        case 10:
            printf("the month is oct\n");
            break;

        case 11:
            printf("the month is nov\n");
            break;

        case 12:
            printf("the month is dec\n");
            break;














    }
    return 0;

}
int main() {
    int days;
    printf("the number of days after which the book was returned:");
    scanf("%d", &days);
    if (days<=0.5) {
        printf("the fine is 50 paisa");
    }
    else if (days<10) {
        printf("the fine is 1 ruppee");
    }
    else {
        printf("the membership is cancelled.");
    }
    return 0;
}*/
#include <math.h>
int main() {
    int avg;
    int a,b,c,d,e;
    int choice;
    printf("1.calculate the average.\n");
    printf("2.find the max number.\n");
    printf("the choice u want:");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("enter 5 numbers:");
            scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
            avg = (a+b+c+d+e)/5;
            printf("the average is:%d\n",avg);
            break;
        case 2:
            int max_array(int a[], int size) {
                int max_value = a[0];
                for (int i = 0;i<size;i++) {
                    if (a[i]>max_value) {
                        max_value = a[i];



                }
                
            }

            }
            int main() {
                int numbers[] = {1,2,5,7,4};
                int maxValue = max_in_array(numbers, 5);
                printf("Max in array: %d\n", maxValue); 
                return 0;



            }
    return 0;
    
}