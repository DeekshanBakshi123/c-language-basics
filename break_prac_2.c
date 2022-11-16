#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int n;

do{
printf("enter num:");
scanf("%d \n",&n);
printf("%d \n",n);

if(n % 7 == 0){
    break;
}

}while(1);
printf("thank you");

    return 0;
}