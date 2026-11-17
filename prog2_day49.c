Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/






  #include <stdio.h>

int main()
{
    char str[100];
    int i = 0, lastSpace = -1;

    scanf("%[^\n]", str);

    // Find the last space
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            lastSpace = i;
        }

        i++;
    }

    // Print initials of first and middle names
    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            printf("%c.", str[i]);
        }
    }

    // Print surname in full
    if (lastSpace != -1)
    {
        printf(" ");

        for (i = lastSpace + 1; str[i] != '\0'; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("%s", str);
    }

    return 0;
}
