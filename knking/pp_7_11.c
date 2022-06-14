#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch, last;

  printf("Enter a first and last name: ");

  while ((ch = getchar()) == ' ')
    ;
  last = ch;
  while ((ch = getchar()) != ' ')
    ;
  while ((ch = getchar()) == ' ')
    ;
  printf("%c", ch);
  while (1) {
    ch = getchar();
    if (ch == ' ' || ch == '\n')
      break;
    else
      printf("%c", ch);
  }
  printf(", %c.\n", last);
  return 0;
}
