/*Enter two person's birthday and compare
there birthday
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    } date;
    date a, b;

    for(int i=0; i<1; i++){
        printf("Enter %d person detail..........\n",i+1);
        printf("\nDate : ");
        scanf("%d",&a.date);
        printf("\nmonth : ");
        scanf("%d",&a.month);
        printf("\nyear : ");
        scanf("%d",&a.year);
    }
    for(int i=0; i<1; i++){
        printf("Enter %d person detail..........\n",i+2);
        printf("\nDate : ");
        scanf("%d",&b.date);
        printf("\nmonth : ");
        scanf("%d",&b.month);
        printf("\nyear : ");
        scanf("%d",&b.year);
    }
    if(a.date!=b.date){
        if(a.month!=b.month){
            if(a.year!=b.year){
                printf("\nBirthday of both person are not same : ");
            }
        }
    }
    else if(a.date!=b.date){
        if(a.month!=b.month){
            if(a.year==b.year){
                printf("\nBirthday year of both are same : ");
            }
        }
    }
    else if(a.date!=b.date){
        if(a.month==b.month){
            if(a.year!=b.year){
                printf("\nBirthday month of both are same : ");
            }
        }
    }
    else if(a.date==b.date){
        if(a.month!=b.month){
            if(a.year!=b.year){
                printf("\nBirthday date of both are same : ");
            }
        }
    }
    else if(a.date!=b.date){
        if(a.month==b.month){
            if(a.year==b.year){
                printf("\nBirthday month and year of both are same : ");
            }
        }
    }
    else if(a.date==b.date){
        if(a.month==b.month){
            if(a.year!=b.year){
                printf("\nBirthday date and month of both are same : ");
            }
        }
    }
    else if(a.date==b.date){
        if(a.month!=b.month){
            if(a.year==b.year){
                printf("\nBirthday date and year of both are same : ");
            }
        }
    }
    else if(a.date==b.date){
        if(a.month==b.month){
            if(a.year==b.year){
                printf("\nBirthday date, month and year of both are same : ");
            }
        }
    }
    else printf("Syntex error");

}