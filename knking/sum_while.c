#include <stdio.h>

int main(void) {
  printf("This program sums a series of integers.\n");

  int sum = 0, num = 1;
  printf("Enter integers (0 to terminate): ");
  while (num != 0) {
    scanf("%d", &num);
    sum += num;
  }

  printf("The sum is: %d\n", sum);

  return 0;
}
