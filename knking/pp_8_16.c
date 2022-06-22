#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch;
  int alphabet[26] = {0};
  int sum = 0;

  printf("Enter first word: ");
  while ((ch = tolower(getchar())) != '\n') {
    if (isalpha(ch))
      alphabet[ch - 97] += 1;
    else
      continue;
  }
  printf("Enter second word: ");
  while ((ch = tolower(getchar())) != '\n') {
    if (isalpha(ch))
      alphabet[ch - 97] -= 1;
    else
      continue;
  }

  for (int i = 0; i < 26; i++)
    sum += alphabet[i];

  if (sum == 0)
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}
