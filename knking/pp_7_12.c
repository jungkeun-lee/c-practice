#include <stdio.h>

int main(void) {
  char ch;
  float num, result;

  printf("Enter an expression: ");
  scanf("%f", &num);
  result = num;
  while (1) {
    ch = getchar();
    if (ch == '+') {
      scanf("%f", &num);
      result += num;
    } else if (ch == '-') {
      scanf("%f", &num);
      result -= num;
    } else if (ch == '*') {
      scanf("%f", &num);
      result *= num;
    } else if (ch == '/') {
      scanf("%f", &num);
      result /= num;
    } else
      break;
  }
  printf("Value of expression : %f\n", result);
  return 0;
}
