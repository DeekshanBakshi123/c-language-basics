#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int age;

printf("Enter your age:");
scanf("%d",&age);

if (age>=18){
 printf("your an adult");
}
else if(age>=13 && age<18){
    printf("your a teenager");
}
else if(age<13){
    printf("child");
}
else{
    printf("k");
}
    return 0;
}