#include <stdio.h>
#include <string.h>
//Q. Make a program to input student information from a user and enter it to a file.
typedef struct student{
    char name[100];
    int roll;
    int age;
    float cgpa;
}stu;
int main(){
    FILE *fptr;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    fptr= fopen("hi.txt", "w");
    stu s[n];
    for(int i=0; i<n; i++){
        printf("Enter Name: ");
        gets( s[i].name);
        fprintf(fptr, "Student name: %s\n", s[i].name);
        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);
        fprintf(fptr, "Roll No.: %d\n", s[i].roll);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        fprintf(fptr, "Age: %d\n", s[i].age);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
        fprintf(fptr, "CGPA: %f\n", s[i].cgpa);
        getchar();
        fprintf(fptr, "\n");
        
    }
    fclose(fptr);
    return 0;
}