#include<stdio.h>
//Q. Create a structure to store vectors. Then make a function to return the sum of 2 vectors.
typedef struct vectors{
    int x;
    int y;
}vec;
void printSum (vec v1, vec v2, vec sum);
int main(){
    vec v1;
    printf("Enter x and y components of vector 1: ");
    scanf("%d, %d", &v1.x, &v1.y);
    vec v2;
    printf("Enter x and y components of vector 2: ");
    scanf("%d, %d", &v2.x, &v2.y);
    vec sum= {0};
    printSum(v1, v2, sum);
}
void printSum (vec v1, vec v2, vec sum){
    sum.x= v1.x+v2.x;
    sum.y= v1.y+v2.y;
    printf("sum of x= %d\n", sum.x);
    printf("sum of y= %d\n", sum.y);
}