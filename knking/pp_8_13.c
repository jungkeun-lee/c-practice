#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch, firstinitial;
  char last[20];
  int index = 0;

  printf("Enter a first and last name: ");

  while ((ch = getchar()) == ' ')
    ;
  firstinitial = ch;
  while ((ch = getchar()) != ' ')
    ;
  while ((ch = getchar()) == ' ')
    ;

  last[index++] = ch;
  while (1) {
    ch = getchar();
    if (ch == ' ' || ch == '\n')
      break;
    else
      last[index++] = ch;
  }
  last[index] = '\n';
  index = 0;
  while (last[index] != '\n')
    printf("%c", last[index++]);
  printf(", %c.\n", firstinitial);
  return 0;
}
