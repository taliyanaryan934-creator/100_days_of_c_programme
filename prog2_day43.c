Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/





  #include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, flag = 1;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
