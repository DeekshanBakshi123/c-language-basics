//cuboid volume calc
#include <stdio.h>
#include <math.h>

int main(){

float length, width, height, volume;

printf("length value:");
scanf("%f",&length);

printf("width value:");
scanf("%f",&width);

printf("height value:");
scanf("%f",&height);

volume = length * width * height;

printf("volume of cuboid: %f \n", volume);

    return 0;
}