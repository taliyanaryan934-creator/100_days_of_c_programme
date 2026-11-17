Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/





#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
