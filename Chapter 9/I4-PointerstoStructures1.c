#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1= {124, 9.3, "Shubham"};
    struct student *ptr;
    ptr = &s1;
    
    printf("name %s\n", (*ptr).name);
    printf("roll no. %d\n", (*ptr).roll);
    printf("cgpa %f\n", (*ptr).cgpa);
    return 0;
}