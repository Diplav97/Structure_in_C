#include<stdio.h>
#include<conio.h>
int main(){
    struct pokemon{
        int IQ;
        int hp;
        int attack;
        int speed;
        char tier;
        float boost;
    };
    struct Legendarypokemon{
        int Inc_HP;
        float Inc_Attack;
        struct pokemon X;
        //struct Legendarypokemon Y; is not valid 
    };
    struct pokemon pikachu;
    struct Legendarypokemon Tysm;

    pikachu.IQ = 81;
    pikachu.attack = 70;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    pikachu.boost = 45.12;
    printf("Attack : %d\n",pikachu.attack);
    printf("Hp     : %d\n",pikachu.hp);
    printf("Speed  : %d\n",pikachu.speed);
    printf("Tier   : %c\n",pikachu.tier);
    printf("Boost  : %f\n",pikachu.boost);
    printf("IQ     : %d\n",pikachu.IQ);

    Tysm.Inc_Attack = 75.5;
    Tysm.Inc_HP = 63;
    printf("Inc_Hp     : %d\n",Tysm.Inc_HP);
    printf("Inc_Attack : %f\n",Tysm.Inc_Attack);
}