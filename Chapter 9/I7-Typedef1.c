#include <stdio.h>
#include <string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;
int main(){
    stu s1= {234, 9.5, "Shubham"};
    printf("name: %s\n", s1.name);
    printf("roll no.: %d\n", s1.roll);
    printf("cgpa: %f\n", s1.cgpa);
    return 0;
}
