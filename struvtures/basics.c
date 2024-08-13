#include<stdio.h>
int main(){
   struct pokemon{
     int hp;
     int atk;
     int speed;  
     char tier; 
    } pikachu , charizard;
 //struct pokemon pikachu;
  pikachu.hp=100;
  pikachu.atk=20;
  pikachu.speed=30;
  pikachu.tier='A';
  
 printf("Pikachu's HP is %d\n",pikachu.hp);

  //struct pokemon charizard;
  charizard.hp=120;
  charizard.atk=30;
  charizard.speed=20;
  charizard.tier='S';
    return 0;
}