#include<stdio.h>
//Q. Create a structure to store complex numbers. (use arrow operators);
typedef struct complex{
    int real;
    int img;
}com;
int main(){
    com comp1;
    com *ptr= &comp1;
    printf("Enter the real and imaginary part of complex number: ");
    scanf("%d, %d", &comp1.real, &comp1.img);
    printf("The real part of complex number is: %d\n", comp1.real);
    printf("The real part of complex number is: %d\n", comp1.img);
}