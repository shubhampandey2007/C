#include<stdio.h>
// Q. Swap 2 number a and b. (Using Call by reference)
void swap(int *a, int *b);
int main(){
    int x =3, y =5;
    swap(&x, &y);
    printf("x is %d and y is %d \n", x, y);
    return 0;
}
void swap(int *a, int *b){
int t= *a;
*a = *b;
*b = t;
printf("a is %d and b is %d\n", *a, *b);
}