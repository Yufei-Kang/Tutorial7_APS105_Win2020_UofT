#include <stdio.h>

int main(void)
{

    int a, b, c, d;
    int *e, *f;

    a = 5;
    b = 6;
    e = &c;
    f = &d;
    *e = a + b;  // c =11
    *f = *e + b; // d = 17
    e = &a;
    f = &b;

    *e = c + d; // a = 28
    *f = a + b; // b = 34
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}