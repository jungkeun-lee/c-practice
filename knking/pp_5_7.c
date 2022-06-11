#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  int max, min, temp;

  if (n2 < n1) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  if (n3 > n4) {
    temp = n3;
    n3 = n4;
    n4 = temp;
  }
  if (n4 > n2)
    max = n4;
  else
    max = n2;
  if (n1 > n3)
    min = n3;
  else
    min = n1;

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
