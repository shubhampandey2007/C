#include<stdio.h>
// Q. Write a function to calculate the percentage of a student from marks in science, maths and sanskrit.
int calcPercentage(int x, int y, int z);
int main(){
    int sci, math, sans;
    printf("enter the marks of science: ");
    scanf("%d", &sci);
    printf("enter the marks of maths: ");
    scanf("%d", &math);
    printf("enter the marks of sanskrit: ");
    scanf("%d", &sans);
    printf("total percentage: %d", calcPercentage(sci, math, sans));
    return 0;
}
int calcPercentage(int x, int y, int z){
    return (x+y+z)/3;
}