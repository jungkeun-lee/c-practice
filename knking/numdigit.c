#include <stdio.h>

int main(void) {
  int num, digit = 0;
  printf("Enter a nonnegative integer: ");
  scanf("%d", &num);

  do {
    digit++;
    num /= 10;
  } while (num != 0);

  printf("The number has %d digit(S)\n", digit);

  return 0;
}
