#include <stdio.h>

int main(void) {
  int num, d;
  printf("Enter the number: ");
  scanf("%d", &num);

  for (d = 2; d * d <= num; d++) {
    if (num % d == 0) {
      printf("This in not a prime number.\n");
      return 0;
    }
  }
  printf("This is a prime number\n");
  return 0;
}
