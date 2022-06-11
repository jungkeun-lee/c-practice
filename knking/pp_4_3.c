#include <stdio.h>

int main(void) {
  int i1, i2, i3;
  printf("Enter a three-digit numebr: ");
  scanf("%1d%1d%1d\n", &i1, &i2, &i3);
  printf("The reversal is: %d%d%d", i3, i2, i1);
  return 0;
}
