#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

    int rn;

printf("enter num:");
scanf("%d",&rn);

if(rn == 0){
    printf("not a real num");
} else {
    printf("a real number");
}

    return 0;
}