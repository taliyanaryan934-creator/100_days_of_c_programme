Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number




#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum = %d", sum);

    return 0;
}
