#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
int main(void) {
  int d, tw, te, fi, on;

  printf("Enter a amount : ");
  scanf("%d", &d);

  pay_amount(d, &tw, &te, &fi, &on);

  printf("$20 bills: %d\n", tw);
  printf("$10 bills: %d\n", te);
  printf(" $5 bills: %d\n", fi);
  printf(" $1 bills: %d\n", on);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars - 20 * *twenties) / 10;
  *fives = (dollars - 20 * *twenties - 10 * *tens) / 5;
  *ones = (dollars - 20 * *twenties - 10 * *tens - 5 * *fives);
}
