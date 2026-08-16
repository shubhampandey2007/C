#include<stdio.h>
#include<string.h>
//user defined
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll= 1664;
    s1.cgpa= 9.2;
    // s1.name= "Shubham";
    strcpy(s1.name, "Shubham");

    printf("student name is: %s\n", s1.name);
    printf("student roll no. is: %d\n", s1.roll);
    printf("student cgpa is: %f\n", s1.cgpa);
    return 0;
}