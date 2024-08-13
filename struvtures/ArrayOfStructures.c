#include<stdio.h>
#include<strings.h>
int main (){
  typedef struct pokemon{
    char name[20];
    int attack;
    int defense;
    int speed;
  } pokemon;
  
  pokemon arr[3];
  strcpy(arr[0].name,"Pikachu");
  arr[0].attack=100;
  arr[0].defense=50;
  arr[0].speed=30;

  strcpy(arr[1].name,"Charmander");
  arr[1].attack=120;
  arr[1].defense=40;
  arr[1].speed=40;

  for(int i=0 ; i < 2 ; i++){
    printf("%s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
    printf("Defense: %d\n",arr[i].defense);
    printf("speed: %d\n",arr[i].speed);
    printf("\n");
      }
      return 0;
}