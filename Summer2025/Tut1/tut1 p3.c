//
// APS105-W25 Lab 2 Part 2
//
// Program that reads in an encoded 4-digit combination, and
// prints the original combination. A combination is simply encrypted
// by swapping the 1st and 4th digits and replacing the 2nd and
// the 3rd digits by their 9's complement.
//
// Assumption: The input is a valid 4-digit integer
//

#include <stdio.h>

int main(void) {
  int encComb;
  printf("Enter an encrypted 4-digit combination: ");
  scanf("%d", &encComb);

  // Determine the 4 digits of the encrypted combinaiton.
  int d4, d3, d2, d1;
  d4 = encComb / 1000;
  encComb = encComb % 1000;
  d3 = encComb / 100;
  encComb = encComb % 100;
  d2 = encComb / 10;
  encComb = encComb % 10;
  d1 = encComb;

  // printing the decryped combination: d4 and d1 are swaped. d3 and d2 are
  // are 9's complemented
  printf("\nThe real combination is: %d%d%d%d\n", d1, 9 - d3, 9 - d2, d4);

  return 0;
}
