#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

char planets;

printf("enter number(1-8):");
scanf("%c", &planets);

switch (planets){
    case 'm':printf("Mercury \n");
           break;
    case 'v':printf("Venus \n");
           break;
    case 'e':printf("Earth \n");
           break;
    case 'M':printf("Mars \n");
           break;
    case 'j':printf("Jupiter \n");
           break;       
    case 's':printf("Saturn \n");
           break;
    case 'u':printf("Uranus \n");
           break;       
    case 'n':printf("Neptune \n");
           break;  
    default:printf("not a valid planet! \n");    
              
}

    return 0;
}