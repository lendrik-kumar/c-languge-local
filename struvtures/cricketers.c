#include<stdio.h>
#include<string.h>
int main (){
  typedef struct cricketer{
    char name[20];
    int age;
    int ntm;
    float ar;
  } cricketer;
  int l;
   printf("enter the number of players");
   scanf("%d",&l);

  cricketer arr[l];

  for(int i=0 ; i < l ; i++){
    scanf("%s\n",arr[i].name);
    scanf("%d\n",&arr[i].age);
    scanf("%d\n",&arr[i].ntm);
    scanf("%f\n",&arr[i].ar);
    printf("\n");
      }
printf("\n"); 

  for(int i=0 ; i < l ; i++){
    printf("%s\n",arr[i].name);
    printf("age: %d\n",arr[i].age);
    printf("matches: %d\n",arr[i].ntm);
    printf("average: %f\n",arr[i].ar);
    printf("\n");
      }
      return 0;
}