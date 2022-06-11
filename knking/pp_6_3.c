#include <stdio.h>

int main(void) {
  int n1, n2, rem, temp;
  int numerator, denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  n1 = numerator;
  n2 = denominator;
  if (n1 < n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  while (n1 % n2 != 0) {
    temp = n2;
    n2 = n1 % n2;
    n1 = temp;
  }
  printf("In lowest terms %d/%d\n", numerator / n2, denominator / n2);
  return 0;
}
