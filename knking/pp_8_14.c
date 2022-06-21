#include <stdio.h>

int main(void) {
  int length = 0, index;
  char sentence[100];
  char ch, terminator;

  printf("Enter a sentence: ");
  while (1) {
    ch = getchar();
    if (ch != '\n')
      sentence[length++] = ch;
    else
      break;
  }
  terminator = sentence[length - 1];
  length -= 2;
  int last = length;

  printf("Reversal of sentence: ");

  for (int i = length; i >= 0; i--) {
    if (sentence[i] == ' ' || i == 0) {
      if (i != 0) {
        for (int j = i + 1; j <= last; j++)
          printf("%c", sentence[j]);
        printf(" ");
        last = i - 1;
      } else {
        for (int j = 0; j <= last; j++)
          printf("%c", sentence[j]);
        printf("%c\n", terminator);
      }
    } else
      continue;
  }
  return 0;
}
