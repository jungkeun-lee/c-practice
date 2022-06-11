#include <stdio.h>

int main(void) {
  printf("This program sums a series of integers.\n");

  int sum = 0, num;
  printf("Enter integers (0 to terminate): ");
  do {
    scanf("%d", &num);
    sum += num;
  } while (num != 0);

  printf("The sum is: %d\n", sum);

  return 0;
}
