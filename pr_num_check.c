#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int i, count = 0, n, max, min, temp ; 

printf("enter num 1");
scanf("%d",min);
printf("enter number 2");
scanf("%d",max);


if(min > max){

temp = min;
min = max;
max = temp;

}

for( i = min; i <= max; i++){

    if( i % 2 == 0){
        count++;
    }

}
    return 0;
}