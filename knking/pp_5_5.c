#include <stdio.h>

int main(void) {
  float income, tax;
  printf("Enter your income: ");
  scanf("%f", &income);

  if (income < 750.00f) {
    tax = income * 0.01;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income, tax);
  } else if (income < 2250.00f) {
    tax = 7.5f + (income - 750.00f) * 0.02;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income - 750.00f, tax);
  } else if (income < 3750.00f) {
    tax = 37.50f + (income - 2250.00f) * 0.03;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income - 2250.00f, tax);
  } else if (income < 5250) {
    tax = 82.50f + (income - 3750.00f) * 0.04;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income - 3750.00f, tax);
  } else if (income < 7000.00f) {
    tax = 142.50f + (income - 5250.00f) * 0.05;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income - 5250.00f, tax);
  } else {
    tax = 230.00f + (income - 7000.00f) * 0.06;
    printf("Taxable income: $%.2f, Tax due: $%.2f\n", income - 7000.00f, tax);
  }
  return 0;
}
