#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1= {244, 8.9, "Shubham Pandey"};
    printf("%s\n", s1.name);
}