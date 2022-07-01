#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]) {
  int x = 0, y = 0;
  int direction, change, count, up, down, left, right;
  walk[0][0] = 'A';
  srand((unsigned)time(NULL));

  for (int alpha = 66; alpha < 91; alpha++) {
    change = 0;
    up = 0;
    down = 0;
    left = 0;
    right = 0;
    while (1) {
      if (up == 1 && down == 1 && left == 1 && right == 1)
        break;
      direction = rand() % 4;
      switch (direction) {
      case 0:
        if (y - 1 < 0 || walk[x][y - 1] != '.') {
          up = 1;
          break;
        } else {
          walk[x][y - 1] = alpha;
          y--;
          change = 1;
          break;
        }
      case 1:
        if (y + 1 > 9 || walk[x][y + 1] != '.') {
          down = 1;
          break;
        } else {
          walk[x][y + 1] = alpha;
          y++;
          change = 1;
          break;
        }
      case 2:
        if (x - 1 < 0 || walk[x - 1][y] != '.') {
          left = 1;
          break;
        } else {
          walk[x - 1][y] = alpha;
          x--;
          change = 1;
          break;
        }
      default:
        if (x + 1 > 9 || walk[x + 1][y] != '.') {
          right = 1;
          break;
        } else {
          walk[x + 1][y] = alpha;
          x++;
          change = 1;
          break;
        }
      }
      if (change == 1)
        break;
    }
    if (up == 1 && down == 1 && left == 1 && right == 1)
      break;
  }
}

void print_array(char walk[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("%c ", walk[i][j]);
    printf("\n");
  }
}
int main(void) {
  char ranwalk[10][10];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      ranwalk[i][j] = '.';

  generate_random_walk(ranwalk);
  print_array(ranwalk);
  return 0;
}
