#include <stdio.h>

void selection_sort(int a[], int length) {
  if (length == 1)
    return;
  int temp;
  for (int i = 0; i < length - 1; i++) {
    if (a[i] > a[i + 1]) {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
  }
  selection_sort(a, length - 1);
}

int main(void) {
  int length = 0;
  int numarray[100];
  char ch;
  int element;

  printf("Enter a series of integers: ");

  for (;;) {
    element = 0;
    while (1) {
      ch = getchar();
      if (ch != ' ' && ch != '\n')
        element = 10 * element + ch - '0';
      else
        break;
    }
    numarray[length++] = element;
    if (ch == '\n')
      break;
  }

  selection_sort(numarray, length);

  printf("Sorted result: ");
  for (int i = 0; i < length; i++)
    printf("%d ", numarray[i]);
  printf("\n");

  return 0;
}
