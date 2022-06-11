#include <stdio.h>

int main(void) {
  float d, t;
  printf("Enter a amount :  ");
  scanf("%f", &d);

  t = d * 1.05;

  printf("With tax added : $%.2f\n", t);

  return 0;
}
