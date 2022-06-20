#include <math.h>
#include <stdio.h>

int main(void) {
  int digit_seen[10] = {0};
  int digit, repox = 0;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit] += 1;
    if (digit_seen[digit] >= 2) {
      repox++;
    }
    n /= 10;
  }

  if (repox > 1) {
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
      if (digit_seen[i] >= 2)
        printf("%d ", i);
    }
    printf("\n");
  } else
    printf("No repeated digit\n");

  return 0;
}
