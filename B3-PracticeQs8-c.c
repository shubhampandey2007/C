#include<stdio.h>
#include<math.h>
// c. if a number is greater than 9 & less than 100 -> true (2 digit number)
int main() {
    int x;
    printf("enter a 2 digit number: ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}