//marks>30    = pass
//marks<=30   is fail

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int marks;

printf("enter marks:");
 scanf("%d",&marks);

 marks >= 0 && marks <30 ? printf("fail") : printf("pass");

// if(marks > 30 && marks <= 100){
//     printf("pass");
// } else if (marks >= 0 && marks <= 30){
//     printf("fail");
// } else {
//     printf("wrong marks");
// }
return 0;
 }