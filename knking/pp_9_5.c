#include <stdio.h>

void print_magic_square(int n, char magic_square[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printf("%5d ", magic_square[i][j]);
    printf("\n");
  }
}

void create_magic_square(int size, char magic_square[size][size]) {
  int row = 0, col = size / 2;

  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      magic_square[i][j] = 0;

  for (int i = 1; i <= size * size; i++) {
    magic_square[row][col] = i;
    if (row == 0)
      row = size - 1;
    else
      row -= 1;
    if (col + 1 == size)
      col = 0;
    else
      col += 1;
    if (magic_square[row][col] == 0)
      continue;
    else {
      if (row == size - 1)
        row = 1;
      else
        row += 2;
      if (col == 0)
        col = size - 1;
      else
        col -= 1;
    }
  }
}

int main(void) {
  int size;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &size);

  char square[size][size];

  create_magic_square(size, square);
  print_magic_square(size, square);
  return 0;
}
