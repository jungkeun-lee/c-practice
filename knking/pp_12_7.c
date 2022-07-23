#include <stdio.h>

#define N 10

void max_min(int a[], int *max, int *min);

int main(void) {
  int b[N], i, big, small;

  printf("Enter 10 numbers: ");
  for (i = 0; i < N; i++)
    scanf("%d", &b[i]);

  max_min(b, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int *max, int *min) {
  int *p;
  *max = *min = a[0];
  for (p = a; p < a + N; p++) {
    if (*p > *max)
      *max = *p;
    if (*p < *min)
      *min = *p;
  }
}
