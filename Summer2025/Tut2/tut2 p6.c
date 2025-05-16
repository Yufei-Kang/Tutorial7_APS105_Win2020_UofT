#include <math.h>
#include <stdio.h>

int main(void)
{

    double input;
    int digits;

    printf("Enter a floating point number between 0 and 10: ");
    scanf("%lf", &input);
    printf("Enter the number of digits after the decimal point: ");
    scanf("%d", &digits);

    for (int i = 0; i < digits; i++)
    {

        int p1 = (int)(input * pow(10, i)) % 10;
        int p2 = (int)(input * pow(10, i + 1)) % 10;
        printf("%d%d\n", p1, p2);
    }
    return 0;
}