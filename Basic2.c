#include<stdio.h>
#include<conio.h>
int main(){
    struct Details{
        char name[15];
        int age;
        float height;
        char grade;
        int marks;
    }; 
    struct Details person;
    printf("\nEnter your age : ");
    scanf("%d",&person.age);
    printf("\nEnter your height : ");
    scanf("%d",&person.height);
    printf("\nEnter your marks : ");
    scanf("%c",&person.marks);
}