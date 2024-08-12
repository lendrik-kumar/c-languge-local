#include<stdio.h>
#include<limits.h>
int main(){

char str[99999];    
printf("enter the word");
scanf("%[^\n]s",str);
int i=0;
while(str[i]!='\0'){
    i++;
}
for(int k=0,j=i-1;k<j;k++,j--){
    char temp = str[k];
    str[k]=str[j];
    str[j]=temp;
}
printf("REVERSE IS :");
puts(str);
    return 0;
}

