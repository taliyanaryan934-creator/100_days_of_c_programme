Q69 (Arrays (1D))
📋
Find the second largest element in an array.






  
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least two elements are required");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] < largest && 
                 (second == largest || a[i] > second))
        {
            second = a[i];
        }
    }

    if (second == largest)
    {
        printf("Second largest element does not exist");
    }
    else
    {
        printf("Second largest element = %d", second);
    }

    return 0;
}
