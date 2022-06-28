#include <stdio.h>

float tax_calculation(float income) {
  float tax;
  if (income < 750.00f) {
    tax = income * 0.01;
  } else if (income < 2250.00f) {
    tax = 7.5f + (income - 750.00f) * 0.02;
  } else if (income < 3750.00f) {
    tax = 37.50f + (income - 2250.00f) * 0.03;
  } else if (income < 5250) {
    tax = 82.50f + (income - 3750.00f) * 0.04;
  } else if (income < 7000.00f) {
    tax = 142.50f + (income - 5250.00f) * 0.05;
  } else {
    tax = 230.00f + (income - 7000.00f) * 0.06;
  }
  return tax;
}

int main(void) {
  float income, taxable;
  printf("Enter your income: ");
  scanf("%f", &income);

  printf("Taxable income: $%.2f, Tax due: $%.2f\n", income,
         tax_calculation(income));
  return 0;
}
