#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int digit;
  long n;

  while (1) {
    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n <= 0)
      break;

    bool digit_seen[10] = {false};

    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else
      printf("No repeated digit\n");
  }
  return 0;
}
