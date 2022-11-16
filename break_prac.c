#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(){

int even, odd,n;

do{
printf("enter number:");
scanf("%d",&n);
printf("%d \n",n);

if(n % 7 == 0){
    break;
}
}
while(1);
printf("thank you");

    return 0;
}