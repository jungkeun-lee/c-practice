#include <stdio.h>

int main(void) {
  int n1, n2, rem, temp;
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  if (n1 < n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  while (n1 % n2 != 0) {
    temp = n2;
    n2 = n1 % n2;
    n1 = temp;
  }
  printf("Greatest common divisor: %d\n", n2);
  return 0;
}
