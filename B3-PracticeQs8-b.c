#include<stdio.h>
#include<math.h>
/*
Q. Print 1(true) or 0(false) for following statements :
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 & less than 100 -> true (2 digit number)
*/
int main() {
    int isMonday = 1;
    int isRaining = 0;
    printf("%d \n", isMonday || isRaining);
    return 0;
}