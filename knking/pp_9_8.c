#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void) { return rand() % 6 + rand() % 6 + 2; }

bool play_game(void) {
  int first = roll_dice();
  printf("You rolled: %d\n", first);
  if (first == 7 || first == 11) {
    printf("You win!\n");
    return true;
  } else if (first == 2 || first == 3 || first == 12) {
    printf("You lose!\n");
    return false;
  } else {
    printf("Your point is %d\n", first);
    while (1) {
      int second = roll_dice();
      printf("You rolled: %d\n", second);
      if (second == first) {
        printf("You win!\n");
        return true;
      } else if (second == 7) {
        printf("You lose!\n");
        return false;
      } else
        continue;
    }
  }
}

int main(void) {
  srand((unsigned)time(NULL));
  int win = 0, lose = 0;
  char yn;
  while (1) {
    if (play_game())
      win++;
    else
      lose++;
    printf("\nPlay again? ");
    yn = getchar();
    if (yn == '\n')
      yn = getchar();
    if (yn == 'y')
      continue;
    else
      break;
  }
  printf("\nWins: %d, Losses: %d\n", win, lose);
  return 0;
}
