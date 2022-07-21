#include <ctype.h>
#include <stdio.h>

#define LENGTH 50

int main(void) {
  char ch;
  char message[LENGTH];
  char *p = message, *q = message;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && p < message + LENGTH) {
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
      *p++ = tolower((int)ch);
    else
      continue;
  }

  int len = (int)(p - q);

  for (int i = 0; i < len / 2; i++) {
    if (*q++ != *--p) {
      printf("Not a palindrome\n");
      return 0;
    }
  }
  printf("Palindrome\n");
  return 0;
}
