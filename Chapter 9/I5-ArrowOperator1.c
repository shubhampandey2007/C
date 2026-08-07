#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1= {243, 9.6, "Shubham"};
    struct student *ptr;
    ptr= &s1;
    printf("name: %s", ptr->name); //(*ptr).name = ptr->name
    return 0;
}