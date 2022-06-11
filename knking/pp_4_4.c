#include <stdio.h>

int main(void) {
  int i, o1, o2, o3, o4, o5;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);
  o5 = i % 8;
  o4 = (i / 8) % 8;
  o3 = ((i / 8) / 8) % 8;
  o2 = (((i / 8) / 8) / 8) % 8;
  o1 = ((((i / 8) / 8) / 8) / 8) % 8;
  printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);
  return 0;
}
