#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
  int i, low_rate, num_years, month;
  double value[5];

  printf("Enter monthly interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%9d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (month = 1; month <= 12 * num_years; month++) {
    for (i = 0; i < NUM_RATES; i++)
      value[i] += (low_rate + i) / 100.0 * value[i];
    if (month % 12 == 0) {
      printf("%3d    ", month / 12);
      for (i = 0; i < NUM_RATES; i++) {
        printf("%10.2f", value[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
