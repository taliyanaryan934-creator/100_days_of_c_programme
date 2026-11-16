Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.




#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0, divisor = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for (int i = 1; i <= digits; i++) {
        divisor = divisor * 10;
    }

    result = last * divisor + (n % divisor / 10) * 10 + first;

    printf("Result = %d", result);

    return 0;
}
