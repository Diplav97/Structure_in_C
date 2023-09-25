/*A record contains name of cricketer, his number of test matches that he has 
played and the average runs that he has scored in each test match. 
Create  an array of structure  to hold records of 3 such cricketer and
 then write a program to read thse record
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int matches;
        float average;
    } cricketer;

    cricketer player[3];
    for(int i=0; i<3; i++){
        printf("Enter player no. %d details...............",i+1);
        printf("\nName : ");
        scanf("%[^\n]s",&player[i].name);
        printf("\nAge : ");
        scanf("%d",&player[i].age);
        printf("\nMatches : ");
        scanf("%d",&player[i].matches);
        printf("\nAverage : ");
        scanf("%f",&player[i].average);
    }
    for(int i=0; i<3; i++){
        printf("\n%d Player profile..........................",i+1);
        printf("\nName    : %s",player[i].name);
        printf("\nAge     : %d",player[i].age);
        printf("\nMatches : %d",player[i].matches);
        printf("\nAverage : %f",player[i].average);
    }

}