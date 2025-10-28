#include <stdio.h>
int main()
{
    struct pokemon
    {
      int hp;
      int attack;
      int speed;
    };

    struct legendaryPokemon
    {
        int specialAttack;
        struct pokemon x;
    };

    
    return 0;
}