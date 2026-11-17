Q67 (Arrays (1D))
📋
Insert an element in an array at a given position.






#include <stdio.h>

int main()
{
    int a[100], n, i, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
