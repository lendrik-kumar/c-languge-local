// #include<stdio.h>
// int main(){
// char ch;
// printf("Enter a character:");
// scanf("%c",&ch);

// if(ch>='a'&&ch<='z') ch -= 32;
// if(ch>='A'&&ch<='Z') ch += 32;

// printf("%c",ch);
//     return 0;
// }
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch); 

    if(ch >= 'a' && ch <= 'z') ch -= 32; // convert lowercase to uppercase
    else if(ch >= 'A' && ch <= 'Z') ch += 32; // convert uppercase to lowercase

    printf("%c\n",ch);
    return 0;
}