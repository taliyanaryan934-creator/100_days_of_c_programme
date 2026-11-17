Q63 (Arrays (1D))
📋
Merge two arrays.







  
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    // Copy second array
    for (j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
