#include <ctype.h>
#include <stdio.h>

int main(void) {
  char message[50];
  char ch;
  int i = 0;
  printf("Enter message: ");
  do {
    ch = getchar();
    message[i++] = ch;
  } while (ch != '\n');

  printf("In B1FF-speak: ");
  for (i = 0; i < 50; i++) {
    ch = toupper(message[i]);
    if (ch == '\n') {
      printf("!!!!!!!!!!\n");
      break;
    }
    switch (ch) {
    case 'A':
      printf("4");
      break;
    case 'B':
      printf("8");
      break;
    case 'E':
      printf("3");
      break;
    case 'I':
      printf("1");
      break;
    case 'O':
      printf("0");
      break;
    case 'S':
      printf("5");
      break;
    default:
      printf("%c", ch);
    }
  }
  return 0;
}
