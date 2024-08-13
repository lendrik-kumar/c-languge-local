#include <stdio.h>
#include <string.h>

typedef struct school {
    int roll;
    char name[20];
    char dep[20];
    char course[20];
    int yoj;
} school;

void check(char s1[20], char s2[20]) {
    int i;
    for (i = 0; i < 20; i++) {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
            break;
        }
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return;
}

int main() {
    school a, b;
    strcpy(a.dep, "coe");
    strcpy(b.dep, "coe");
    check(a.dep, b.dep);  

    return 0;
}