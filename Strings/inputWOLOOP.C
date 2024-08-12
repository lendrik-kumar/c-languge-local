#include<stdio.h>
#include<string.h>
int main(){
 char str[] = "heloo qww";
//  printf("%s",str);
//  puts(str);
// puts("hello");
gets(str);
printf("%s",str);
    return 0;
}

//gets ->  if we take input by scanf the it only considers 1st word nothing after space
//puts ->for printing strings
//puts() is used to print the string and the null character at the end of the string