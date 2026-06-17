#include<stdio.h>
#include<math.h>
/*
Q. Are the following valid or not?
a) int a = 8^8 (VALID)
b) int x; int y = x; (VALID)
c) int x, y = x; (INVALID)
d) char stars = '**'; (INVALID)
*/
int main() {
    int a;
    printf("%d", a = 8^8);
    return 0;
}