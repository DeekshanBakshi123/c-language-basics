#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

int n,sum =0;

printf("enter value:");
scanf("%d",&n);

for(int i=1, j=n; i<=n && j>=1 ; i++ , j--){
sum+=i;
printf("%d \n", j);
}
printf("sum %d",sum);
return 0;
}