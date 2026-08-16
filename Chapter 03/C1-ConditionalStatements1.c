#include<stdio.h>
// if-else
int main() {
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Adult \n");
        printf("they can drive \n");
        printf("they can vote \n");
    }
    else {
       printf("Not an Adult \n");
    }
    return 0;
}