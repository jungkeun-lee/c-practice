#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

int read_line(char str[], int n);

int main(void) {
  char small[MAX_LENGTH] = "z", large[MAX_LENGTH] = "A", word[MAX_LENGTH];

  while (1) {
    printf("Enter word: ");
    read_line(word, MAX_LENGTH);
    if (strcmp(small, word) > 0)
      strcpy(small, word);
    if (strcmp(large, word) < 0)
      strcpy(large, word);
    if (strlen(word) == 4)
      break;
  }
  printf("Smallest word : %s\n", small);
  printf("Largest word : %s\n", large);

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';

  return i;
}
