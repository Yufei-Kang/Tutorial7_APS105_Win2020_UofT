#include <stdio.h>

int main(void)
{

    const double TOLERANCE = 0.001;
    double sum = 0.0, term = 1.0;
    int n = 0;

    while (term >= TOLERANCE)
    {
        sum = sum + term; // accumulate the term
        n = n + 1;        // determine next term
        term = term / n;
    }
    printf("The value of e is approximately %f.\n", sum);
    printf("The number of terms in the sum is %d.\n", n);
    return 0;
}