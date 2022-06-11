#include <stdio.h>

int main(void) {
  int ac;
  printf("Enter Area code: ");
  scanf("%d", &ac);

  switch (ac) {
  case 229:
    printf("Albany\n");
    break;
  case 404:
  case 470:
  case 678:
  case 770:
    printf("Atlanta\n");
    break;
  case 478:
    printf("Macon\n");
    break;
  case 762:
  case 706:
    printf("Columbus\n");
    break;
  case 912:
    printf("Savannah\n");
    break;
  default:
    printf("Area code not recognized\n");
  }
  return 0;
}
