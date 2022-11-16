#include <math.h>
#include <ctype.h>
#include <stdio.h>

int main(){

int n;

printf("enter num:");
scanf("%d",&n);

int fl = 1;

for(int i = 1; i<=n;i++){

    fl *= i;

}
  printf("%d ",fl);

    return 0;
}