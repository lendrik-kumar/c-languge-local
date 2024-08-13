#include<stdio.h>
typedef struct pokemon{
    int hp;
    int attack;
  } pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    return;
}

int main(){
  pokemon pikachu;
  pikachu.hp = 60;
  pikachu.attack = 85;
  fun(pikachu);
    return 0;
}