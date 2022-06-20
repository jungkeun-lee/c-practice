#include <stdio.h>

int main(void) {
  int matrix[5][5];
  int rowsum[5] = {0}, colsum[5] = {0};

  for (int row = 0; row < 5; row++) {
    printf("Enter row %d: ", row + 1);
    for (int col = 0; col < 5; col++) {
      scanf("%d", &matrix[row][col]);
      rowsum[row] += matrix[row][col];
    }
  }
  for (int col = 0; col < 5; col++)
    for (int row = 0; row < 5; row++)
      colsum[col] += matrix[row][col];

  printf("\nRow totals: ");
  for (int row = 0; row < 5; row++)
    printf("%d ", rowsum[row]);
  printf("\nColumn totals: ");
  for (int col = 0; col < 5; col++)
    printf("%d ", colsum[col]);
  printf("\n");

  return 0;
}
