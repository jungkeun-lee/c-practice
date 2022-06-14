/* Adds two fractions */

#include <stdio.h>

int main(void) {
  char ch;
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter two fractions separated by a arithmetic sign: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

  switch (ch) {
  case '+':
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  case '-':
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The difference is %d/%d\n", result_num, result_denom);
    break;
  case '*':
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    printf("The product is %d/%d\n", result_num, result_denom);
    break;
  case '/':
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
    printf("The Quotient is %d/%d\n", result_num, result_denom);
    break;
  }

  return 0;
}
