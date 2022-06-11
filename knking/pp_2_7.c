#include <stdio.h>

int main(void) {
  int d, tw, te, fi, on;

  printf("Enter a amount : ");
  scanf("%d", &d);

  tw = d / 20;
  te = (d - 20 * tw) / 10;
  fi = (d - 20 * tw - 10 * te) / 5;
  on = (d - 20 * tw - 10 * te - 5 * fi);

  printf("$20 bills: %d\n", tw);
  printf("$10 bills: %d\n", te);
  printf(" $5 bills: %d\n", fi);
  printf(" $1 bills: %d\n", on);

  return 0;
}
