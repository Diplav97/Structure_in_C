#include<stdio.h>
#include<conio.h>
int main(){
    struct BOOK{
        char name[50];
        int pages;
        float price;
    }A, B, C;

    A.pages = 100;
    A.price = 120.50;
    strcpy(A.name,"Secret Sevent");
    //A.name = 'Secret Seven';
    printf("Structure of book A\n");
    printf("Pages in A : %d\n",A.pages); 
    printf("Price of A : %f\n",A.price); 
    printf("Name  of A : %s\n",A.name); 
}