#include <stdio.h>

int main(void) {
  int n, f = 1;
  float e = 1.0f;

  printf("Enter an integer: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    f *= i;
    e += 1.0 / f;
  }
  printf("e's approximation is %.5f\n", e);
  return 0;
}
