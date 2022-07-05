#include <stdio.h>

double power(double x, int n) {
  if (n == 0)
    return 1;
  else if (n % 2 == 0)
    return power(x, n / 2) * power(x, n / 2);
  else
    return x * power(x, n - 1);
}

int main(void) {
  double x;
  int n;

  printf("Enter a value of x and n for x^n: ");
  scanf("%lf %d", &x, &n);

  printf("The result is %lf\n", power(x, n));

  return 0;
}
