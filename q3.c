#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

char ch;

printf("enter character:");
scanf("%c",&ch);

if( ch >= 'A' && ch <= 'Z'){
    printf("uppercase");

} else if (ch >= 'a' && ch <= 'z'){
    printf("lowercase");

} else {
    printf("not a valid char");
}
    return 0;
}