#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch;
  int sum = 0;

  printf("Enter a sentence: ");

  while ((ch = toupper(getchar())) != '\n') {
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      sum++;
  }
  printf("Your sentence contains %d vowels\n", sum);
  return 0;
}
