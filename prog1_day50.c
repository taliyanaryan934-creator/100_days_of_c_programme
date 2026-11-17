Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/




  #include <stdio.h>

int main()
{
    char date[20];
    int i = 0;

    scanf("%s", date);

    // Print day
    while (date[i] != '/')
    {
        printf("%c", date[i]);
        i++;
    }

    printf("-");

    // Skip the first '/'
    i++;

    // Check month
    if (date[i] == '0' && date[i + 1] == '4')
    {
        printf("Apr");
    }

    // Skip month
    i += 2;

    // Skip the second '/'
    i++;

    printf("-");

    // Print year
    while (date[i] != '\0')
    {
        printf("%c", date[i]);
        i++;
    }

    return 0;
}
