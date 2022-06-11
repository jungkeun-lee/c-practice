#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);

  printf("The number %d has ", i);

  if (i < 10)
    printf("%d ", 1);
  else if (i < 100)
    printf("%d ", 2);
  else if (i < 1000)
    printf("%d ", 3);
  else
    printf("%d ", 4);

  printf("digit");
  if (i >= 10)
    printf("s\n");
  else
    printf("\n");

  return 0;
}
