Q66 (Arrays (1D))
📋
Insert an element in a sorted array at the appropriate position.








  
#include <stdio.h>

int main()
{
    int a[100], n, i, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements in sorted order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (a[i] > num)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
