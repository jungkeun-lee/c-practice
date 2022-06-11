#include <stdio.h>

int main(void) {
  int f = 1, i = 2;
  float e = 1.0f, error;

  printf("Enter an error: ");
  scanf("%f", &error);
  while ((1.0 / f) >= error) {
    e += 1.0 / f;
    f *= i++;
  }
  printf("e's approximation is %.5f\n", e);
  return 0;
}
