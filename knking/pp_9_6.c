#include <stdio.h>

double power(double x, int n) {
  double result = 1;
  for (int i = 0; i < n; i++)
    result *= x;
  return result;
}

int main(void) {
  double x;
  printf("Enter a value for x: ");
  scanf("%lf", &x);
  printf("The value of function is %lf.\n", 3 * power(x, 5) + 2 * power(x, 4) -
                                                5 * power(x, 3) - power(x, 2) +
                                                7 * x - 6);

  return 0;
}
