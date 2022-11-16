#include <stdio.h>
#include <ctype.h>

int main(){

char chartest;

printf("enter the character:");
scanf("%c",&chartest);

if(isdigit(chartest))
printf("This is a digit: \n");

else
printf("This is a character: \n");

    return 0;
}