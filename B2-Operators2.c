#include<stdio.h>
#include<math.h>
//Logical Operators
int main() { 
    printf("%d \n", 4>3 && 5>4);
    printf("%d \n", 4>5 && 2>3);
    //&& (AND)
    printf("%d \n", 3 != 4 || 4 <= 1);
    printf("%d \n", 3 > 4 || 7 == 9);
    //|| (OR)
    printf("%d \n", !(2>9));
    printf("%d \n", !(7 == 7));
    //! (NOT)
    return 0; 
} 