#include <stdio.h>

int mostSignificantDigit(int number)
{

    int leadingDigit;

    while (number > 0)
    {
        leadingDigit = number % 10;
        number /= 10;
    }
    return leadingDigit;
}

int main(void)
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int leadingDigit = mostSignificantDigit(number);

    printf("The most significant digit is: %d\n", leadingDigit);

    return 0;
}