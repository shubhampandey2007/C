#include<stdio.h>
// Ternary Operator
int main() {
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    age >= 18? printf("Adult") : printf("Not Adult");
    return 0;
}