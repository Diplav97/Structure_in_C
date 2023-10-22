#include<stdio.h>
#include<conio.h>

int main(){
    typedef struct pokemon{
        int HP;
        int Speed;
        float Boost;
        char Name[20];
        char Tier;
    } pokemon;
    pokemon pikachu;
    pikachu.HP = 60;
    pikachu.Speed = 120;
    pikachu.Boost = 65.540;
    pikachu.Tier = 'A';
    strcpy(pikachu.Name,"Pikachu");

    pokemon *x = &pikachu;
    printf("%p\n",&pikachu.HP);
    printf("%p\n",&pikachu.Speed);
    printf("%p\n",&pikachu.Boost);
    printf("%p\n",pikachu.Name);
    printf("%p\n",pikachu.Tier);

    printf("%p",x);
    return 0;
}