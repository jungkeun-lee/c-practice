#include <stdio.h>

int main(void) {
  int scrabble[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  char ch;
  int value = 0;

  printf("Enter a word: ");

  ch = getchar();
  while (ch != '\n') {
    value += scrabble[ch - 97];
    ch = getchar();
  }

  printf("Scrabble Value: %d\n", value);

  return 0;
}
