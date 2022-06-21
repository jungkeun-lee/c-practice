#include <stdio.h>

int main(void) {
  char original[15];
  char decode[15];
  char ch;
  int index = 0;

  printf("Enter phone number: ");
  ch = getchar();

  while (ch != '\n') {
    switch (ch) {
    case 65:
    case 66:
    case 67:
      decode[index] = '2';
      break;
    case 68:
    case 69:
    case 70:
      decode[index] = '3';
      break;
    case 71:
    case 72:
    case 73:
      decode[index] = '4';
      break;
    case 74:
    case 75:
    case 76:
      decode[index] = '5';
      break;
    case 77:
    case 78:
    case 79:
      decode[index] = '6';
      break;
    case 80:
    case 82:
    case 83:
      decode[index] = '7';
      break;
    case 84:
    case 85:
    case 86:
      decode[index] = '8';
      break;
    case 87:
    case 88:
    case 89:
      decode[index] = '9';
      break;
    default:
      decode[index] = ch;
    }
    index++;
    ch = getchar();
  }
  decode[index] = '\n';

  printf("In numeric form: ");
  index = 0;
  while (decode[index] != '\n') {
    printf("%c", decode[index]);
    index++;
  }
  printf("\n");
  return 0;
}
