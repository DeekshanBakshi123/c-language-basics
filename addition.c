#include <stdio.h>

int main(){
    int a, b;

    printf("value of a:");
    scanf("%d", &a);
    printf("value of b:");
    scanf("%d", &b);

    int sum = a * b;
    printf("sum of a and b: %d \n", sum);
    return 0;
}
