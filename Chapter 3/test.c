#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Natural numbers are strictly greater than 0 (1, 2, 3...)
    int isNatural = (num > 0);

    printf("Is it a natural number? (1 = Yes, 0 = No): %d\n", isNatural);

    return 0;
}