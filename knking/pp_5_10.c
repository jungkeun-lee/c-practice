#include <stdio.h>

int main(void) {
  int grade;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade < 0 || grade > 100)
    printf("Illegal garde\n");
  else {
    printf("Letter grade: ");
    switch (grade / 10) {
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    default:
      printf("F\n");
    }
  }
  return 0;
}