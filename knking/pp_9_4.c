#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++)
    if (counts1[i] != counts2[i])
      return false;
  return true;
}

void read_word(int counts[26]) {
  char ch;
  while ((ch = tolower(getchar())) != '\n') {
    if (isalpha(ch))
      counts[ch - 97] += 1;
    else
      continue;
  }
}

int main(void) {
  int alphabet1[26] = {0};
  int alphabet2[26] = {0};

  printf("Enter first word: ");
  read_word(alphabet1);

  printf("Enter second word: ");
  read_word(alphabet2);

  if (equal_array(alphabet1, alphabet2))
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}
