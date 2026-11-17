Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/







  #include <stdio.h>

int main()
{
    char str[100], temp;
    int i = 0, j;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}
