/*
marks<30  C
30<=marks<70  B
70<= marks<90  A
90<= marks<=100  A+
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int marks;

printf("enter marks:");
scanf("%d",&marks);

if(marks>=0 && marks < 30){
    printf("grade is C");
} else if(marks >= 30 && marks < 70){
    printf("grade is B");
} else if(marks >= 70 && marks <90){
    printf("grade is A");
} else if(marks>=90 && marks <=100){
    printf("grade is A+");
} else {
    printf("wrong value");
}

return 0;
}