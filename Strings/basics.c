#include<stdio.h>
int main(){
    int z=0;
  char ch[] ="hello\0";
  while(ch[z]!='\0'){
    // printf("%c",ch[z]);
    z++;
  }
  printf("%d",z+1);
    return 0;
}