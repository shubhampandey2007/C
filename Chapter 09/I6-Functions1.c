#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);
int main(){
    struct student s1= {234, 9.5, "Shubham"};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1){
    printf("name: %s\n", s1.name);
    printf("roll no.: %d\n", s1.roll);
    printf("cgpa: %f\n", s1.cgpa);
}