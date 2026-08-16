#include<stdio.h>
#include<math.h>
/*
Q. Write a Program to give grades to a student
   marks < 30 is C
   30 <= marks < 70 is B
   70 <= marks < 90 is A
   90 <= marks <= 100 is A+
*/
int main() {
    int marks;
    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);
    if(marks < 30) {
        printf("C");
    }
    else if (marks >= 30 && marks < 70) {
        printf("B");
    }
    else if (marks >= 70 && marks < 90) {
        printf("A");
    }
    else if (marks >= 90) {
        printf("A+");
    }
    else {
        printf("NOT A VALID NUMBER!");
    }
    return 0;
}