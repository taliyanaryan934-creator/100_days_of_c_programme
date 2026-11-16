
Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.






#include <stdio.h>

int main() {
    int n, remainder, complement = 0, place = 1;

    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;

        if (remainder == 0) {
            complement = complement + 1 * place;
        }
        else {
            complement = complement + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %d", complement);

    return 0;
}
