#include <stdio.h>

#define MAX_LENGTH 100

int main(void) {
  int length, index;
  char sentence[MAX_LENGTH];
  char ch;
  char *p, *s, *e, *t;

  printf("Enter a sentence: ");
  for (p = sentence; p < sentence + MAX_LENGTH; p++) {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  printf("Reversal of sentence: ");

  t = p - 1;
  e = p - 1;
  for (p = t - 1; p >= sentence; p--) {
    if (*p == ' ' || p == sentence) {
      if (p != sentence) {
        for (s = p + 1; s < e; s++)
          putchar(*s);
        putchar(' ');
        e = p;
      } else {
        for (s = sentence; s < e; s++)
          putchar(*s);
        putchar(*t);
        printf("\n");
      }
    } else
      continue;
  }
  return 0;
}
