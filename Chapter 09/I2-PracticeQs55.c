#include <stdio.h>
#include <string.h>
//Q. Write a program to store the data of 3 students.
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll= 188;
    s1.cgpa= 9.2;
    strcpy(s1.name, "Shubham");

    printf("name is: %s\n", s1.name);
    printf("roll no.: %d\n", s1.roll);
    printf("cgpa: %f\n", s1.cgpa);
    printf("\n");

    struct student s2;
    s2.roll= 145;
    s2.cgpa= 8.7;
    strcpy(s2.name, "Saatvik");

    printf("name is: %s\n", s2.name);
    printf("roll no.: %d\n", s2.roll);
    printf("cgpa: %f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    s3.roll= 143;
    s3.cgpa= 2.3;
    strcpy(s3.name, "ASA");

    printf("name is: %s\n", s3.name);
    printf("roll no.: %d\n", s3.roll);
    printf("cgpa: %f\n", s3.cgpa);

    return 0;
}