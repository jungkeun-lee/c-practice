#include <stdio.h>

int main(void) {
  int day, start;
  printf("Enter number of days in month: ");
  scanf("%d", &day);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  for (int i = 1; i < start; i++)
    printf("   ");
  for (int i = 1; i <= day; i++) {
    printf("%2d ", i);
    if (i % 7 == 8 - start)
      printf("\n");
  }
  printf("\n");
  return 0;
}
