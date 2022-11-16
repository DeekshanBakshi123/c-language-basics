#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){

for(int i = 5;i<=50;i++){

if( i % 2 == 0){
    continue;
}
printf("all the odd nums:%d \n",i);
}

    return 0;
}