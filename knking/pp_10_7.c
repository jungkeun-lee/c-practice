#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  char ch;
  int num[MAX_DIGITS];
  int length = 0;

  clear_digits_array();

  printf("Enter a number: ");

  while ((ch = getchar()) != '\n' && length < MAX_DIGITS) {
    if (ch >= 48 && ch <= 57) {
      process_digit((int)(ch - 48), length);
      length++;
    } else
      continue;
  }

  print_digits_array();

  return 0;
}

void process_digit(int digit, int position) {
  if (segments[digit][0] == 1)
    digits[0][4 * position + 1] = '_';
  if (segments[digit][1] == 1)
    digits[1][4 * position + 2] = '|';
  if (segments[digit][2] == 1)
    digits[2][4 * position + 2] = '|';
  if (segments[digit][3] == 1)
    digits[2][4 * position + 1] = '_';
  if (segments[digit][4] == 1)
    digits[2][4 * position] = '|';
  if (segments[digit][5] == 1)
    digits[1][4 * position] = '|';
  if (segments[digit][6] == 1)
    digits[1][4 * position + 1] = '_';
}

void clear_digits_array(void) {
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      digits[i][j] = ' ';
}

void print_digits_array(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++)
      printf("%c", digits[i][j]);
    printf("\n");
  }
}
