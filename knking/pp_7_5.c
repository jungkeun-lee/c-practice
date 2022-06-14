#include <ctype.h>
#include <stdio.h>

int main(void) {
  char ch;
  int sum = 0;

  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 68:
    case 71:
      sum += 2;
      break;
    case 66:
    case 67:
    case 77:
    case 80:
      sum += 3;
      break;
    case 70:
    case 72:
    case 86:
    case 87:
    case 89:
      sum += 4;
      break;
    case 75:
      sum += 5;
      break;
    case 74:
    case 88:
      sum += 8;
      break;
    case 81:
    case 90:
      sum += 10;
      break;
    default:
      sum += 1;
    }
  }
  printf("Scrabble value: %d\n", sum);
  return 0;
}
