#include <math.h>
#include <ctype.h>
#include <stdio.h>

int main(){
    char weekdays;

    printf("enter character:");
    scanf("%s",&weekdays);

    switch(weekdays){
        case 'm':printf("Monday");
            break; 
        case 't':printf("Tuesday");
            break;
        case 'w':printf("Wednesday");
            break;
        case 'T':printf("Thursday");
            break;
        case 'f':printf("Friday");
            break;
        case 's':printf("Saturday");
            break;
        case 'S':printf("Sunday");
            break;

        default:printf("Invalid character!");
    }
}