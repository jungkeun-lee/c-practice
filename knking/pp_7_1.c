#include <stdio.h>

int main(void) {
  printf("This program prints a table of squares\n");

  long num;
  printf("Enter number of entries in table: ");
  scanf("%ld", &num);

  printf("%10ld\t %10ld\n", num, num * num);

  return 0;
}
