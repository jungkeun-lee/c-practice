#include <stdio.h>

int main(void) {
  char ch;
  int length = 0, sum = 0, count = 0;
  float avg;

  printf("Enter a sentence: ");

  while (1) {
    ch = getchar();
    if (ch != ' ' && ch != '\n')
      length++;
    else {
      sum += length;
      length = 0;
      count++;
      if (ch == '\n')
        break;
    }
  }
  avg = (float)sum / count;
  printf("Average word length: %.1f\n", avg);

  return 0;
}
