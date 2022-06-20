#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int direction, change;
  char ranwalk[10][10];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      ranwalk[i][j] = '.';
  int x = 0, y = 0;
  ranwalk[0][0] = 'A';
  srand((unsigned)time(NULL));

  for (int alpha = 66; alpha < 91; alpha++) {
    change = 0;
    while (1) {
      direction = rand() % 4;
      switch (direction) {
      case 0:
        if (y - 1 < 0 || ranwalk[x][y - 1] != '.')
          break;
        else {
          ranwalk[x][y - 1] = alpha;
          y--;
          change = 1;
          break;
        }
      case 1:
        if (y + 1 > 9 || ranwalk[x][y + 1] != '.')
          break;
        else {
          ranwalk[x][y + 1] = alpha;
          y++;
          change = 1;
          break;
        }
      case 2:
        if (x - 1 < 0 || ranwalk[x - 1][y] != '.')
          break;
        else {
          ranwalk[x - 1][y] = alpha;
          x--;
          change = 1;
          break;
        }
      default:
        if (x + 1 > 9 || ranwalk[x + 1][y] != '.')
          break;
        else {
          ranwalk[x + 1][y] = alpha;
          x++;
          change = 1;
          break;
        }
      }
      if (change == 1)
        break;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("%c ", ranwalk[i][j]);
    printf("\n");
  }

  return 0;
}
