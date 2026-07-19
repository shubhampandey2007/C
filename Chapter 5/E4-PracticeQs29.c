#include<stdio.h>
#include<math.h>
// Q. Use library functions to calculate the square of a number by user.
void printSquare(int s);
int main(){
    int s;
    printf("enter a number: ");
    scanf("%d", &s);
    printSquare(s);
    return 0;
}
void printSquare(int s){
    printf("square of the number is: %f \n", pow(s,2));
}