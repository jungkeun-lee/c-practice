#include <stdio.h>

int main(void) {
  char ch;
  char sentence[50];
  int index = 0, shift;

  printf("Enter message to be encrypted: ");
  do {
    ch = getchar();
    sentence[index++] = ch;
  } while (ch != '\n');
  sentence[index] = '\n';

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  index = 0;
  while (1) {
    if (sentence[index] >= 65 && sentence[index] <= 90) {
      if (sentence[index] + shift > 90)
        printf("%c", sentence[index] + shift - 26);
      else
        printf("%c", sentence[index] + shift);
    } else if (sentence[index] >= 97 && sentence[index] <= 122) {
      if (sentence[index] + shift > 122)
        printf("%c", sentence[index] + shift - 26);
      else
        printf("%c", sentence[index] + shift);
    } else {
      printf("%c", sentence[index]);
    }
    if (sentence[index] == '\n')
      break;
    index++;
  }
  printf("\n");

  return 0;
}
