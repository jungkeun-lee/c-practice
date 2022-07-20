#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

int main(void) {
  int numerator, denominator;
  int reduced_numerator, reduced_denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms %d/%d\n", reduced_numerator, reduced_denominator);
  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
  int n1, n2, rem, temp;

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
  *reduced_numerator = numerator / n2;
  *reduced_denominator = denominator / n2;
}
