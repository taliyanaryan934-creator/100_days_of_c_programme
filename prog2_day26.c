Q52 (Nested Loops without Arrays/Strings)
📋
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*












#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 && j == 1) ||
                (i == 2 && j <= 3) ||
                (i == 3 && j <= 5) ||
                (i == 4 && j <= 3) ||
                (i == 5 && j == 1))
            {
                printf("*\n");
            }
        }

        if (i == 1 || i == 2 || i == 3 || i == 4)
            printf("\n");
    }

    return 0;
}
