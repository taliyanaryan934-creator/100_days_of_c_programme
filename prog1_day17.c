Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.



#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (original == sum) {
        printf("Armstrong Number");
    }
    else {
        printf("Not Armstrong Number");
    }

    return 0;
}
