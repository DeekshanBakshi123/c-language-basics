#include <stdio.h>
#include <math.h>
#include <ctype.h>

// first num-5,second num-23
int main(){

    int num1;
    int num2;

printf("enter the first number:");
scanf("%d",&num1);

printf("enter the second number: ");
scanf("%d",&num2);

if(num2>num1){

printf("%d is smaller",num1);

} 

else if(num1>num2) {

printf("%d is smaller",num2);

}

else {

    printf("%d and %d are equal",num1,num2);

}

return 0;

}