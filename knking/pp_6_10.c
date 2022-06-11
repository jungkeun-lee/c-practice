#include <stdio.h>

int main(void) {
  int month, day, year;
  int m = 12, d = 31, y = 99;
  while (1) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (month == 0 || day == 0 || year == 0)
      break;

    if (year < y) {
      y = year;
      m = month;
      d = day;
    } else if (year > y)
      continue;
    else {
      if (month < m) {
        m = month;
        d = day;
      } else if (month > m)
        continue;
      else {
        if (day < d)
          d = day;
      }
    }
  }
  printf("%d/%d/%.2d is the earliest date.\n", m, d, y);
  return 0;
}
