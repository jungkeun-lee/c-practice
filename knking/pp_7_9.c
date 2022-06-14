#include <stdio.h>

int main(void) {
  int hour, minute;
  char ch;
  printf("Enter a 12-hour time: ");
  scanf("%d:%d", &hour, &minute);

  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case 'p':
    case 'P':
      hour += 12;
      break;
    default:;
    }
  }
  printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
  return 0;
}
