#include<stdio.h>
#include<math.h>
/*
Q. Print 1(true) or 0(false) for following statements :
a. if it's sunday & it's snowing -> true
*/
int main() {
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);
    return 0;
}