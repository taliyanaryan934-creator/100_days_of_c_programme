Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/




#include <stdio.h>

int main()
{
    char str[200], word[100];
    int i = 0, j = 0;
    int max = 0, len = 0;

    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
            len++;
        }
        else
        {
            if (len > max)
            {
                max = len;
                word[j] = '\0';

                for (int k = 0; k <= j; k++)
                {
                    word[k] = word[k];
                }
            }

            if (str[i] == '\0')
                break;

            j = 0;
            len = 0;
        }

        i++;
    }

    // Find and print the longest word again
    i = 0;
    j = 0;
    len = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            len++;
        }
        else
        {
            if (len == max)
            {
                int start = i - len;
                for (j = start; j < i; j++)
                    printf("%c", str[j]);

                return 0;
            }

            len = 0;
        }

        i++;
    }

    if (len == max)
    {
        int start = i - len;
        for (j = start; j < i; j++)
            printf("%c", str[j]);
    }

    return 0;
}
