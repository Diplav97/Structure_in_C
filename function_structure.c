#include<stdio.h>
#include<conio.h>

typedef struct pokemon{
        int HP;
        int Speed;
        char Tier;
        char Name[20];
    } pokemon;

void fun(pokemon p){
    printf("Health of Pikachu is %d\n", p.HP);
    printf("Speed of Pikachu is  %d\n", p.Speed);
    printf("Rank of pikachu is   %c\n", p.Tier);
    return;
}

int main(){
    
    pokemon pikachu;
    pikachu.HP = 60;
    pikachu.Speed = 120;
    pikachu.Tier = 'A';
    fun(pikachu);
}