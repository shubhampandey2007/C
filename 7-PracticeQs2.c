#include<stdio.h>
// Q. Write a program to calculate the area of a circle. (radius is given)
int main() {
    float radius;
    printf("given radius: ");
    scanf("%f", &radius);

    float pi;
    printf("value of pi: ");
    scanf("%f", &pi);

    printf("Area of the Circle is: %f", pi * radius * radius);
    return 0;

}