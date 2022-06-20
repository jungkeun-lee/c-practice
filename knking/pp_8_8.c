#include <stdio.h>

int main(void) {
  int matrix[5][5];
  int stutotal[5] = {0};
  int subtotal[5] = {0};
  int submin[5] = {100, 100, 100, 100, 100};
  int submax[5] = {0};

  for (int row = 0; row < 5; row++) {
    printf("Enter grade of student #%d: ", row + 1);
    for (int col = 0; col < 5; col++) {
      scanf("%d", &matrix[row][col]);
      stutotal[row] += matrix[row][col];
    }
  }
  for (int col = 0; col < 5; col++) {
    for (int row = 0; row < 5; row++) {
      subtotal[col] += matrix[row][col];
      if (matrix[row][col] > submax[col])
        submax[col] = matrix[row][col];
      if (matrix[row][col] < submin[col])
        submin[col] = matrix[row][col];
    }
  }
  printf("            total   average\n");
  for (int row = 0; row < 5; row++) {
    printf("Student #%d: %3d  %8.1f\n", row + 1, stutotal[row],
           (float)stutotal[row] / 5);
  }
  printf("\n         average     high     low\n");
  for (int col = 0; col < 5; col++)
    printf("quiz #%d: %5.1f %9d %7d\n", col + 1, (float)subtotal[col] / 5,
           submax[col], submin[col]);

  return 0;
}
