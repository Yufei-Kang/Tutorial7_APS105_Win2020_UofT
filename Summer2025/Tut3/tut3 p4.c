#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == 1 || row == 1 || col + row - 1 == n || row == n || col == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}