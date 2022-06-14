#include <stdio.h>

int main(void) {
  float result = 1;
  float num;

  printf("Enter a positive integer: ");
  scanf("%f", &num);

  for (int i = 1; i <= (int)num; i++)
    result *= (float)i;

  printf("Factorial of %f: %f\n", num, result);
  return 0;
}
