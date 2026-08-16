#include<stdio.h>
#include<math.h>
/*
Q. Write a program to check if a student passed or failed.
   marks > 30 is PASS
   marks <= 30 is FAIL
*/
int main() {
    int marks;
    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);
    if(marks > 30 && marks <= 100) {
        printf("Pass");
    }
    else if (marks >= 0 && marks <= 30) {
        printf("Failed");
    }
    else {
        printf("NOT A VALID NUMBER!");
    }
    return 0;
}