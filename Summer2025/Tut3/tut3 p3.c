#include <math.h>
#include <stdio.h>

void getInput(int *outFeet, int *outInches);
void printOutput(int feet, int inches, int metres, int centimetres);
int convert(int feet, int inches); //, int *outMetres, int *outCentimetres);

void getInput(int *outFeet, int *outInches)
{
    printf("Please enter the feet and inches to convert: ");
    scanf("%d %d", outFeet, outInches);
}

void printOutput(int feet, int inches, int metres, int centimetres)
{

    printf("%d feet %d inches is %d metres and %d centimetres.\n", feet, inches, metres, centimetres);
}
/*
void convert(int feet, int inches, int *outMetres, int *outCentimetres)
{
    double length = feet + (inches / 12.0);
    double metres = length * 0.3048;
    *outMetres = metres; // truncate to integer *outCentimetres = rint((metres - *outMetres) * 100);
}
*/
int convert(int feet, int inches)
{
    double length = feet + (inches / 12.0);
    double metres = length * 0.3048;
    int outMetres = metres; // truncate to integer
    int outCentimetres = rint((metres - outMetres) * 100);
    return outMetres, outCentimetres;
}

int main(void)
{
    int feet, inches;
    getInput(&feet, &inches);
    int metres, centimetres;
    metres, centimetres = convert(feet, inches);
    // convert(feet, inches, &metres, &centimetres);
    printOutput(feet, inches, metres, centimetres);
    return 0;
}