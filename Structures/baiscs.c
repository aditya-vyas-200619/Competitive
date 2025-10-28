// Stuctures = user defined data types.
#include <stdio.h>
int main()
{
  struct pokemon  //user defined data type
{
  int hp;
  int speed;
  int attack;
  char tier; //S,A,B,C,D
};
struct pokemon pikachu;
pikachu.hp = 100;
pikachu.speed = 80;
pikachu.attack = 90;
pikachu.tier = 'A';

printf("%d",pikachu.attack);

struct pokemon charizard;
charizard.hp = 120;
charizard.speed = 110;
charizard.attack = 100;
charizard.tier = 'S';


 struct pokemon  //user defined data type
{
  int hp;
  int speed;
  int attack;
  char tier; //S,A,B,C,D
}pikachu, charizard;                                   // another way to define.

pikachu.hp = 100;
pikachu.speed = 80;
pikachu.attack = 90;
pikachu.tier = 'A';

printf("%d",pikachu.attack);


charizard.hp = 120;
charizard.speed = 110;
charizard.attack = 100;
charizard.tier = 'S';

return 0;
}