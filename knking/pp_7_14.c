#include <math.h>
#include <stdio.h>

int main(void) {
  double x, y = 1, quo;
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  while (fabs((x - (y * y)) / (2 * y)) >= 0.00001) {
    y = (x + y * y) / (2 * y);
  }
  printf("Square root: %lf\n", y);
  return 0;
}
