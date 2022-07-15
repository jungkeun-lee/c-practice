#include <stdio.h>

int main(void) {
  int rank[5] = {1, 3, 3, 3, 3};

  int index = 0;
  int result = 0;
  int sum;

  while (index < 4) {
    sum = 0;
    while (rank[index] == rank[index + 1]) {
      sum += 1;
      if (index == 3)
        break;
      else
        index++;
    }
    index++;
    result += sum * sum;
  }

  printf("%d\n", result);
  return 0;
}
