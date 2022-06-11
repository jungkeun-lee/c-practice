#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  printf("The reversal is ");
  while (i != 0) {
    printf("%d", i % 10);
    i /= 10;
  }
  printf(".\n");
  return 0;
}
