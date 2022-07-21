#include <stdio.h>

#define LENGTH 50

int main(void) {
  char ch;
  char sentence[LENGTH];
  char *p = sentence;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && p < sentence + LENGTH) {
    *(p++) = ch;
  }
  printf("Reversal is: ");
  for (p = p - 1; p >= sentence; p--)
    printf("%c", *(p));
  printf("\n");

  return 0;
}
