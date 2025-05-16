#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    // printf("current time: %ld\n", time(NULL));
    srand(time(NULL));
    int output = (rand() % 5 + 1) * 5;
    printf("rand 1:%d\n", output);

    return 0;
}
// p1
/*
r = (pow(x, n) + 6 * pow(x, 4.0)) / (sin(y) + cos(z));

// p2

double square = sqrt(num / 10) + sqrt(num % 10);

// p3
srand(time(NULL));
int randomChoice = (rand() % 151 - 75) * 2;

// p4
srand(time(NULL));
int randomNum = ((rand() % 5) + 1) * 5;
*/
