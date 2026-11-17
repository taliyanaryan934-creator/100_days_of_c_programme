Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/





  #include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i = 0, j = 0, k = 0;
    int len1 = 0, len2 = 0, found = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[len1] != '\0')
    {
        len1++;
    }

    while (str2[len2] != '\0')
    {
        len2++;
    }

    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    // Concatenate str1 with itself
    for (i = 0; i < len1; i++)
    {
        temp[i] = str1[i];
    }

    for (i = 0; i < len1; i++)
    {
        temp[len1 + i] = str1[i];
    }

    temp[2 * len1] = '\0';

    // Check whether str2 exists in temp
    for (i = 0; i < len1; i++)
    {
        k = 0;

        while (k < len2 && temp[i + k] == str2[k])
        {
            k++;
        }

        if (k == len2)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}
