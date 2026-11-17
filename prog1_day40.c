Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/






#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, k;
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (k = 0; k < r + c - 1; k++)
    {
        if (k % 2 == 0)
        {
            row = (k < r) ? k : r - 1;
            col = k - row;

            while (row >= 0 && col < c)
            {
                printf("%d ", a[row][col]);
                row--;
                col++;
            }
        }
        else
        {
            col = (k < c) ? k : c - 1;
            row = k - col;

            while (col >= 0 && row < r)
            {
                printf("%d ", a[row][col]);
                row++;
                col--;
            }
        }
    }

    return 0;
}
