#include<stdio.h>
// esle if
int main() {
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    if(age >= 18) {
        printf("Adult");
    }
    else if(age >= 13 && age < 18) {
        printf("Teen");
    }
    else{
        printf("Child");
    }
    return 0;
}