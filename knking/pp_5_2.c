#include <stdio.h>

int main(void) {
  int hour, minute;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: %d:%d ", hour > 12 ? hour - 12 : hour,
         minute);
  if (hour > 12)
    printf("PM\n");
  else
    printf("AM\n");

  return 0;
}
