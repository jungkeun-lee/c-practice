#include <stdio.h>

int main(void) {
  float loan, ir, pay;
  int np;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &ir);
  printf("Enter monthly payment: ");
  scanf("%f", &pay);
  printf("Enter the number of payments: ");
  scanf("%d", &np);

  for (int i = 1; i <= np; i++) {
    loan = loan * (1 + ir / 1200) - pay;
    printf("Balance remining after %d", i);
    switch (i % 10) {
    case 1:
      printf("st");
      break;
    case 2:
      printf("nd");
      break;
    case 3:
      printf("rd");
      break;
    default:
      printf("th");
    }
    if (i == 11 || i == 12 || i == 13)
      printf("\b\bth");
    printf(" payment: $%.2f\n", loan);
  }
  return 0;
}
