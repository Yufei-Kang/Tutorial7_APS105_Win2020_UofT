
#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (i % 9 == 0 && i % 2 == 0 && i / 10 % 10 != 7)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
