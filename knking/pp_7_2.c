#include <stdio.h>

int main(void) {
  printf("This program prints a table of squares\n");

  int num, i = 1;
  printf("Enter number of entries in table: ");
  scanf("%d", &num);
  getchar();
  while (i <= num) {
    printf("%10d\t %10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Press Enter to continue...");
      getchar();
    }
    i++;
  }

  return 0;
}
