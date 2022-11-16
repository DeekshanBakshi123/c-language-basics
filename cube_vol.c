#include <stdio.h>

int main(){

    float n, volume;

    printf("value of side: \n");
    scanf("%f",&n);

    volume = n * n * n;
    printf("volume of the cube %f \n", volume);
    
    return 0;

}