#include <stdio.h>

int main(void) {
  int num, square = 0;
  printf("Enter number of entries in table: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    square += 2 * i - 1;
    printf("%10d%10d\n", i, square);
  }
  return 0;
}
