Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.



#include <stdio.h>

int main() {
    int n, remainder, product = 1;

    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;

        if (remainder % 2 != 0) {
            product = product * remainder;
        }

        n = n / 10;
    }

    printf("Product = %d", product);

    return 0;
}
